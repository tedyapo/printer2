#include <avr/pgmspace.h>

#include "compressed-art.h"

void setup() {
  Serial.begin(9600);
}

void send_char(char c)
{
  Serial.print(c); 
}

#define R(x) pgm_read_byte_near(x)

void uncompress(const char *data)
{
  const char *ptr = data;
  while(R(ptr) != 0){
    if ((R(ptr) & 0x80)){
      send_char(R(ptr) & 0x7f);
    } else {
      char c = R(ptr);
      int count = R((unsigned char*)++ptr);
      for (int i=0; i<count; i++){
        send_char(c);
      }
    }
    ptr++;
  }
}

void loop() {
  long rand_idx = random(n_images);
  uncompress(compressed_images[rand_idx]);
}
