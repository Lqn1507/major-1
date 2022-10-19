//Code by Dylan Estronza-Ramirez dje007
//Function that checks the binary representation of a number less than 2 billion is a palindrome

#include <major1.h>

void Palindrome(unsigned int num1)
{

    int original=0; //temp used so we can change num1

    original = num1;

    int bin[32]={0}; //used to make the 32 bit binary representation
    int i=31; //used in loops as parameter

            //loop to create the binary representation
    while(num1!=0)
    {
        bin[i--]=num1&1;
        //right shift
        num1=num1>>1;
    }

    printf("\nBinary Representation: ");

    //loop to print binary representation
    for(int x=0; x<32; x++)
    {
        printf("%d", bin[x]);
    }

    //variables used as indexes to determine if 2 bits of the binary representation are equal
    int x=0;
    i=31;

    //loop used to determine if binary number is palindrome
    while(x<i)
    {
        if(bin[x]!=bin[i])
        {
            printf("\n\n%d is not a Palindrome\n", original);
            return;
        }

        x++;
        i--;
    }
    //else
    printf("\n\n%d is a Palindrome\n\n", original);
    return;

};