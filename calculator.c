/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
	int a,b;
	char op;
	scanf("%d %d %c",&a,&b,&op);
	switch(op)
	{ 
	    case'+':
	    printf("Addition = %d",a+b);
	    break;
	    
	    case'-':
	    printf("Subtraction =%d",a-b);
	    break;
	    
	    case'*':
	    printf("Multiplication = %d",a*b);
	    break;
	    
	    case'/':
	    printf("Division = %.2f",(float)a/b);
	    break;
	    
	    case'%':
	    printf("Modulo Division = %d",a%b);
	    break;
	    
	    default:
	    printf("invalid");
	}
	return 0;
	    
	    

}