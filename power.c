//Power.c
//By: Jason Wolfe
//An integer will be a power of 2 if its binary representation only contains a single 1
//power() loops through the 31 bits of X and checks to see if it contains only a single 1
//else it finds the most significant bit which is a 1 and returns the next highest power
//of 2, which is the next following bit.


#include<major1.h>
void power(unsigned int x){
	unsigned int j = x;	//Store value of x in j so we can perform bitwise operations on j without losing value of x
	unsigned int y = 1;	//Mask to check if first bit of X is 1
	bool isPow = false;	//Bool to track if X is a power of 2


	for(int i = 0; i < 31; i++){	//This for loop goes through each bit of int j
	
		if(j & y && !isPow){	//Sets isPow to true at the first occurence of a 1
			isPow = true;
		}

		else if(j & y && isPow){	//If a 1 one was already found and we find another, not a power of 2, isPow = false and break from the loop
			isPow = false;
			break;
		}

		j >>= 1;	//Right shift j to check the next bit
	}	

	if(isPow){	//If x is a power of 2 then return the value of x and finish
		printf("%d is a power of 2\n", x);
	}

	else{		//Else x is not a power of 2. Loop to find most significant 1 bit, the next highest power of 2 will be the follwoing bit
	
		int temp = 0;	//Temp int to store index of most significant 1 bit
		for(int i = 0; i < 31; i++){
			if(x & y){
				temp = i;
			}

			x >>= 1;
		}
		
		y <<= temp+1;	//Left shift y temp+1 bits to get the next highest power of 2 
		printf("The next highest power of 2 is %u\n", y);
	}
}
