//Lap Quang Nguyen CSCE 3600 10/15/2022 function to reverse bit of a positive number under 2 billion 
#include <major1.h>

void reverse(unsigned int x)
{
// size of the number and reverse number 
        unsigned  int size = sizeof(x) * 8; 
        int reverse = 0;
// loop to check the position of 1 value bit and put it in the size-1-i position
        for (int i = 0; i < size; i++)
        {
                if((x & (1 << i)))
                reverse |= 1 << ((size - 1) - i);
        }
// print the reverse value
        printf("Reverse number is: %u\n", reverse); 
}
