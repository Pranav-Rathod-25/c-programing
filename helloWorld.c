#include<stdio.h> /*	"#"is the pre processing element which indicates that the 
						argumnet next to it should be processed before starting the
						compilation of programing .
						include shows that header files mentioned adjecent to it in <> should be
						included for further process.
						"<>" shows that the headder file written in between the <> should search in
						standard path only . 
						while stdio.h is a header file  which is used to use a inputFunction and 
						outputFunction from it which we are using it for printf.
					*/

int main(void)		/*	"int" is data type of returned value .
						 "main" is the entry point function of the program. 
						 "void" indicates the main function is not taking any retrurn value.
						 "()" are the function bracket.
					*/
						
{  /* start of the program */

	/* function main body */

	printf("Hello World !!!!\n");	/*	"printf("")" display the argument written as we are using
										the stdio.h so printf comes under the standar output file.
										";" is a end of line 
									*/
	
	return(0);	/*  "return(0)" is acknowledegment of program executede sucessfully
					.It  return the value to the os .
					as OS has called the main function.
				*/
	
}  /*	end of the program  */