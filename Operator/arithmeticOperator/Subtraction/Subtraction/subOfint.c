#include<stdio.h> 

int numberOne = -90;
int numberTwo = 80;
int result = 0;

int main(void)
{
	result = numberOne - numberTwo;/*Here we have used '-' operator which is called as subtraction
					 operator.
					 Arity of subtraction operator is binary. 
					 Associavity of Subtraction operator is from left to right 
					 It will first take the value from left hand side variable
					 and then from right hand side, it will then subtract
					 after sucessful operation it will create a resulted value
					 so to store a resulted value we required a variable thats 
					 why we have use result variable on right hand side .
					 result is on right hand side is becuase associavity of 
					 assignment operator is from right to left.
					 Now even if we gave a negative number or assign a negative 
					 value to variable subtractor operator will still not oppose 
					 the rule of basic maths and it will give sucessive result.
					 depending on the polarity of number.
					*/
	printf("\n%d - %d = %d\n",numberOne , numberTwo , result);
	numberOne = 70;
	numberTwo = 10;
	result = numberOne - numberTwo;
	printf("\n%d -%d = %d\n",numberOne , numberTwo , result);
	return(0);
}
