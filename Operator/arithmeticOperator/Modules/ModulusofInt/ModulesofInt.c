#include<stdio.h>

int numberOne = 50;
int numberTwo = 9;
int resultMod = 0;
int resultDiv = 0;

int main(void)
{
	resultMod = numberOne % numberTwo;/*Here we have used modulus operator '%'.
					 This operator is used for taking a remainder from for two operands.
					 Becuase Divison operator do not give remainder .
					 Associavity of this operator is from left to right.
					 Arity of this operator is binary. 
					  */
	printf("%d %% %d = %d\n",numberOne, numberTwo, resultDiv);
	resultDiv = numberOne / numberTwo;// Here we have done divison of numbers from variables	
	resultMod = numberOne / numberTwo;// Here we have done Modulus of numbers from variables 
	printf("%d / %d = %d:resultDiv\n" ,numberOne, numberTwo, resultDiv);
	printf("%d %% %d = %d:resultMod\n",numberOne , numberTwo , resultMod); 
	return(0);
}
