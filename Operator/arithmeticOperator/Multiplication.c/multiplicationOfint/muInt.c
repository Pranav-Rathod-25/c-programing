#include<stdio.h>

int numberOne = 10;
int numberTwo = 90;
int result = 0;

int main(void)
{
	result = numberOne* numberTwo;/*Here we have multiply the value from two variable;
					the symbol for multliplication is '*'which is called 
					symbol 'asteric' 
					Arity of '*' is binary.
					Associavity of '*' is from right to left.
					*/
	printf("%d * %d = %d",numberOne , numberTwo , result);

	result = 10*numberOne;/* In this case we have multpily a value from a variable 
				 to constant integer and it gives appropriate result . 
				 Without failing any maths case.
				 */
	printf("\n%d*%d \n%d = result",numberOne, numberTwo,result);
	result =  5*-5;/*In this case we have multiplied two constant coefficient
			 and value is stored in a variable result.
			 Even if we have given a negative intiger it will give
			 a apporprite result.
			 */

	printf("\n5*5 = \n%d = result",result);
	return(0);
}
