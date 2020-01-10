#include<stdio.h>
#include<process.h> //for exit() function
void calc();

int main()
{
	calc();
	return 0;
}

 void calc()
 {
 	printf("\t\t\t\t\t\t****CALCULATOR****\n");
	top:
	{
	float a,b;
	int n;
	char x;
		printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
		printf("\nEnter any two numbers:\na = ");
		scanf("%f",&a);
		printf("b = ");
		scanf("%f",&b);
		
		start:
			
		printf("\nChoose from the following options:\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\n=> ");
		scanf("%d",&n);
	
		switch(n) // menu driven
	{
		case 1:
			printf("\n--- The Sum of %.2f and %.2f is %.2f ---\n",a,b,a+b);
			break;
		case 2:
			printf("\n--- The Subtraction of %.2f from %.2f is %.2f ---\n",b,a,a-b);
			break;
		case 3:
			printf("\n--- The Multiplication of %.2f and %.2f is %.2f ---\n",a,b,a*b);
			break;
		case 4:
			printf("\n--- The division of %.2f by %.2f is %.2f ---\n",a,b,a/b);
			break;
		case 5:
			exit(0);
			
		default:
			printf("\n!!!!! Invalid Choice !!!!!\n~~~~ Please choose a valid option ~~~~\n");
			goto start;
	}
		
		printf("\n\n $$$ Restart the Calculator $$$ \n y = Yes\t n = No ? \n:");
		scanf(" %c",&x); 	//left a black space before %c to remove input skip
		if(x=='y'||x=='Y')
		goto top;
	}
 }


