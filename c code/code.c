//Code written in December, 2020
// by S Manasa

//This program implements a boolean function in C

#include <stdio.h>

//The  main function
int main(void)
{

//2 bits = 1 baud
//4 bits = 1 nibble
//8 bits = 1 byte

//unsigned char takes input as 1 byte

unsigned char  X=0x01,Y=0x01,Z=0x01;//inputs in hex	
unsigned char one = 0x01;//used for displaying the output in bit
unsigned char F;//output

F=((~X)&Y&(~Z))|(X&Z)|((~Y)&Z);//Boolean function
  
printf("%x\n",one&F);//Output F
return 0;

}