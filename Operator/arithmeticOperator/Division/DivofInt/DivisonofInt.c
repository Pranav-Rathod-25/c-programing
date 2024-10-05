#include<stdio.h>

int numberOne = 10;
int numberTwo = 2;
int result = 0;

int main(void)
{
	result = numberOne / numberTwo;/*here we have used divisor operator'/' which  is used
					 for divison purpose .
					 The divisor operator have associativity is from left to right 
					 The arity of operator is binary wwhich means this operator 
					 require two operands.
					 Now intersting thing of division operator is it dosen't 
					 give remainder it will just give a answer of a divison .
					 and if the answer is in point form it will only show
					 number before point becuase we have use integer form 
					 if we need point form then we need to use float or double 
					 datatype for a variable to stored fractioned number.
					  */
	printf("\n%d / %d = %d\n",numberOne, numberTwo , result); 
	return(0);
}

