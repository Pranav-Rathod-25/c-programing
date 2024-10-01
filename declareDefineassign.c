#include<stdio.h>

int numberOne ;

int main(void)
{
	numberOne = 1;/* The variable 'numberOne' was declare and define in global scope.
			 But we havent initilized the value to the variable in the gobal scope.
			 So when we 'assign' the value to this variable in main body then we are
		         just putting a value in the space alloted by the complier while declaring 
		         and defining the variable .
		         Now we could manipulte the value in the variable by using assignment operator
			 in main body of program or in sub function of program .
			 What we could not do is creating the variable with same name twice if the
			 variable was declared before entry point function or main body of program.
			 If the variable is created in main body then we could create a variable of 
			 same name but in another sub function of the program.	 
			 */
	printf("%d this number was declared in local scope\n",numberOne);
	return(0);
}
