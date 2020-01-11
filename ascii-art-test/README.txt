compressed ASCII art generator
------------------------------

ascii-art-list.txt: constains a list of ASCII art text files and
                    corresponding variable names to use for them

compress-ascii.py: python3 script that reads ascci-art-list.txt and
                   compresses all the listed text files into a header file
                   called compressed-art.h

compressed-art.h: automatically generated header file containing the compressed
                  ASCII images

ascii-art-test.ino: test program that chooses a random ASCII art image from
                    those compressed and outputs it to the serial terminal.
                    this program is for those who don't have an awesome little
                    inkjet

