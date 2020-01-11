#!/usr/bin/env python3

'''
compression algorithm:

1. single characters have MSB (0x80) set; this is stripped before printing
2. repeat characters have MSB (0x80) clear, and are followed by a single-byte repeat count

'''

import sys

def start_decl(outfile, name):
    outfile.write('const char compressed_' + name + '[] PROGMEM = {\n')

def end_decl(outfile, name):
    outfile.write('}; // compressed_' + name + '\n\n')

def emit(outfile, char, count):
    if count == 1:
        outfile.write("'\\x" + format(ord(char) | 0x80, 'x') + "',\n")
        return 1
    else:
        outfile.write("'\\x" + format(ord(char), 'x') + "',\n")
        outfile.write("'\\x" + format(count, 'x') + "',\n")
        return 2

def compress_ascii(outfile, filename, varname):
    start_decl(outfile, varname)
    infile = open(filename, 'r')
    uncompressed_size = 0
    compressed_size = 0
    for line in infile:
        uncompressed_size += len(line)
        line = line.rstrip().encode('utf-8')
        line = line.decode('unicode_escape')
        if not line:
            compressed_size += emit(outfile, '\n', 1)
            continue
        char = line[0]
        count = 1
        for i in range(1, len(line)):
            if line[i] == char:
                if count < 255:
                    count += 1
                else:
                    compressed_size += emit(outfile, char, count)
                    count = 1
            else:
                compressed_size += emit(outfile, char, count)
                char = line[i]
                count = 1
        compressed_size += emit(outfile, char, count)
        compressed_size += emit(outfile, '\n', 1)
    end_decl(outfile, varname)
    sys.stderr.write('filename: ' + filename + '\n')
    sys.stderr.write('uncompressed: ' + str(uncompressed_size) + '\n')
    sys.stderr.write('compressed: ' + str(compressed_size) + '\n')
    sys.stderr.write('compression ratio: ' + str(uncompressed_size / compressed_size) + '\n\n')


outfile = open('compressed-art.h', 'w')
outfile.write('// DO NOT EDIT THIS FILE\n')
outfile.write('// AUTOMATICALLY GENERATED BY ' + sys.argv[0] + '\n\n')
config_file = open('ascii-art-list.txt', 'r')
varnames = []
for line in config_file:
    if line[0] == '#':
        continue
    try:
        artname, varname = line.split()
    except:
        continue
    compress_ascii(outfile, artname, varname)
    varnames.append(varname)

outfile.write('int n_images = ' + str(len(varnames)) + ';\n')
outfile.write('const char* compressed_images[' + str(len(varnames)) + '] = {\n')
for varname in varnames:
    outfile.write('  compressed_' +  varname + ',\n')
outfile.write('};\n')

outfile.close()
