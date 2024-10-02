//This is a program to add to int which are defined in Global scope.

#include<stdio.h>

int numberOne = 20;
int numberTwo = 10;
int result = 0;

int main(void)
{
	result = numberOne + numberTwo ;/*In this statement we have used '+' operator and '=' operator.
					  '+' operator is called as addition operator 
					  '=' operator is called as assignment operator
					  Arity of the '+' operator is from right to left,arity of '=' 
					  operator is from right to left. 
					  Now when complier enters the main body of program control
					  flow will go to first line that is 
					  'result = numberOne + numberTwo;' 
					  when complier will come on this line it will first add the 
					  values from variables .
					  It will first take the value from right hand side intiger
				          then it will take the value from left hand side of the intiger 
					  and will add from right hand side value to left hand side and it
				          will create a successful result of addition .
					  Then after sucessful addition of as per our requirement of storing
					  a result of addition for our furhter use or to display  we have used
					  the variable to store the result .
					  Our code will also run even if we have just written addition statement 
				          code will execute sucessfully without any error .	  
					 */
	printf("\n %d + %d = %d \n",numberOne, numberTwo , result);/* In this printf we have passed three intiger
								      those are %d +  %d = %d 
								      Where 1st %d is numberOne 
								      2nd %d is numberTwo
								      3rd %d is result .
								      and now if we pass numberOne to 2nd %d it 
								      will display value stored in numberOne 
								      which is 20.
								      or if pass result to 1st %d it will display 
								      the vaue 30 as result and output will look 
								      like '10 +30 = 20'
								      so its on us how we write or pass the value 
								      in the printf 
								      so format specifier in printf are not linked 
								      with there valriable . we can say they are more 
								      probably depend on the way we pass the value. 
								      */

	return(0);
}
	
