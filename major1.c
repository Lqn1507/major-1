//major1.c
//By: Jason Wolfe, Lap Nguyen, Dylan Estronza, Edgar Deseano
#include<major1.h>

int main(){
	
	int menu_option = 0;	//Variable to hold user entered menu option
	bool menu = true;	//Variable to control menu loop
	unsigned int myInt = 0;		//Variable for user entered integer for operations to be performed on
	while(menu){		//Main loop for the menu

		while(true){	//Loop to get menu option from user
			 printf("Enter the menu option for the operation to perform:\n(1) POWER OF 2\n(2) REVERSE BITS\n(3) REPLACE BIT POSITION FROM MASK\n(4) PALINDROME\n(5) EXIT\n");
               		 scanf("%d", &menu_option);
			 if(menu_option < 1 || menu_option > 5){
			 	printf("Error, invalid option. Please try again.\n");
				continue;
			 }

			 else
				 break;
		}

		 while(true && menu_option != 5){           //Loop to get value for myInt from user
                                        printf("Enter a positive integer less than 2 billion: ");
                                        scanf("%d", &myInt);
                                        if(myInt < 1 || myInt > 1999999999)
                                                continue;
                                        else
                                                break;
                                }


		

		switch(menu_option) {	//Switch statment with each of the 5 menu options
			case 1 : {
				power(myInt);
				break;
				 }
			case 2 :
				reverse(myInt);
				break;

			case 3 :
			       	replace(myInt);
				break;

			case 4 : {
				 Palindrome(myInt);
				 break;
				 }
			case 5: 
				menu = false;
				printf("Terminating program. Goodbye.\n");
				break;
		}
	}

	return 0;
}
