#include<stdio.h>

int numberOne = 10; /*In this statement we have define the numberOne is a type of integer variable whose size is 4 bytes as it is integer type
		     now compiler know that numberOne is a integer but we have also initilize that the varible will contain 10 as a data .
		     So now when compiler will allot a space of 4 bytes as an integer have, while creation or alloting the space to numberOne 
		     variable it will give the data as 10 in decimal.

		  	int = data type.
		     	numberOne = variable whose datatype is int.			
		     Now '='operator means assignment operator, assignment  operator '=' associavity is from right to left , as we have written
		     'numberOne = 10' which means that 10 value will be assign to numberOne variable, becuase 10 is at right side and variable is at
		     left side .Assignment operator usually needs two operator which we state the arity of assignment operator is binary.
		     While assignment operator assign the value to the righthand , before assigning the value it will first convert the value of the 
		     left hand side to the compitable of the right hand side and then assign the value.

		    This statement which is written before main body, which declare the variable ,define the type of the variable or the datatype of 
		    variable , and assign the value to varible is called "declare define anda initilize " of a variable.  
                  */

int main(void)
{
	printf("%d this number was declared in global scope\n",numberOne);/*this statement / command is printf we have describe it in our first 
									   program of hello world. Now in this printf we have written %d which is
									   format specifier which means if we want to print te data from a varable
									   we need to write its format specifier which will be then understand
									   by compllier and complier will then know that we want to print a value
									   from a variable .Format specifier are different based on the data type 
								      	   a variable; now for integer its %d int this where d means decimal.
									   We can alos write %i as i stands for integer but when we write i it 
									   will write a value as form of integer .
									   Now we have also written that ',numberOne' outside the "" which is 
									   becuase as we have written %d now we need to write a variable from 
									   which the data should be written.
									   The number of format specifier and variable outside "" should be equal.
									   Every format specifier need a variable or we can say every variable
									   needs a format specifier to print its value. 
                    This variable is declared in global scop means value in this variable will be 
                    same until we change it . 
									   */
	return(0);
}
