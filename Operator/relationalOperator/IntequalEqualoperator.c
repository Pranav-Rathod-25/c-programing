#include<stdio.h>

int numberOne =10;
int numberTwo =10;
int result = 0;

int main(void)
{
	/*From this program we have started new types of Operators Those are called Relational operator.
	 *
	 * Relational operator perform comparission between given operands and according to it they give a output
	 * relational operator gives boolean values which are '0&1'.
	 *
	 * 0- reprerents that the statement is false.
	 * 1- resperents that the statement is true.
	 *
	 * In this program we are going to look 1st relational operator"equal-equal"
	 * Symbol for this operator is '=='
	 * Arity is binary 
	 * Associativity is from left to right 
	 */
	result = numberOne == numberTwo;/*Now here we taken to variables namely 'numberOne' and 'numberTwo'
					  which were declared defined and initilized in global scope.
					  When this line executes complier will first go on = 
					  as = have associativity from right to left , when it move to right 
					  it will first see a 1st operand numberOne after that == operator now
					  complier knows that this operator have associavity from Left to right
					  then , as it have a value of 1st operand 'numberOne' and then will take 
					  take the secod operand 'numberTwo' .
					  After taking this two operator it will perform == operation .

					  Now this operator acts as a equal comparator if both the operands on both side 
					  have same value it will then give output 1 which is true as both the operand 
					  contains same value.
					   */
	printf("\n%d == %d =%d\n",numberOne,numberTwo,result);

	numberOne = 12;
	numberTwo = 10;
	result = numberOne == numberTwo;/*Before executing this statement commplier will first execute the above assignment 
					  operation.
					  Now here as we know that both variable have differnet operation so equal-equal
					  operator  will give 0 as a output. 
					  Which means that the value in both operand are different.
					  so equalequal operator will compare 
					  and give 0 in boolean output  
					   */

	printf("%d == %d =%d\n",numberOne,numberTwo,result);
	return(0);
}

