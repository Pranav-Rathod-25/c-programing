#include<stdio.h>

int numberOne = 0;
int numberTwo = 0;
int result = 0;

int main(void)
{
 	numberOne = 10;
       	numberTwo = 19;

	result = numberOne != numberTwo;/*In this program we have used a new operator namely "Not equal to"
					 this operator gives boolen output.
					 Arity of this program is is binary.
					 Associativity of this operator is fromm left to right .

					 This operator will the value of operands pass through it 
					 if the operands are having a different value it will give 1 as 
					 output which means statement is true as both the operands have 
					 different value .
					 If we pass same value to the operands then it will sgive output 
					 0 which is flase as the operator it self says it is not equal to 
					 operator.

					 Now this operator is taken from basic logic gate not which actually 
					 gives compliment value means inverted or opposite value if pass 1
					 it will give output 0 .
					 And if we passvalue 0 to not gate it will pass output value 1.
					   */
	printf("%d != %d = %d\n",numberOne,numberTwo,result);

	return(0);
}	
