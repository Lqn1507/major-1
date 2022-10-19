//replace.c
//Edgar Deseano CSCE 3600 10/16/2022 function to replace a bit of a positive number under 2 billion
#include <major1.h>

//Main function for replace
void replace(unsigned int x)
{
	unsigned int mask = 0, index;
	
	//functions that asks the user to enter a digit for the mask 
	//that's positive and less than 3 billion
	while (1)
	{
		printf("Enter mask less than 3 billion:: ");
		scanf("%d",&mask);
		if (mask < 1 || mask > 2999999999) {
			continue;
		}
		else { break; }
	}
	//functions that asks the user to enter a bit postion
	//for the mask
	while (1)
	{
		printf("Enter a position: ");
		scanf("%d",&index);
		if (index > 31 || index < 0) {
			continue;
		}
		else { break; }
	}

	//this is collecting the bit from the mask
	int temp = (mask >> index) & 1;

	//rather the bit postion is 1 else
	if (temp == 1) {
		temp = temp << index;
		x |= temp;
	}
	//the bit would through here if bit postion is 0
	else {
		int flag = 4294967295; //sets all the bits to 1
		temp = 1 << index;
		//this is setting the bit position of 0 and the rest 1
		flag = flag ^ temp;
		x &= flag;
	}
	//this prints out the coverted digit after it's processed
	printf("The converted digit is: %d\n", x);
}
