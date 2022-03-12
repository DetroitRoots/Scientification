#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

#define PI 3.14159265

int input();
float a,b,c,d,e=0;
int V_,y,z;
double x,ret,val;
//double sin(double x);  //needs to be checked.
void output(float);
int main()
{
	float result;
	int choice, num;
	printf("Scientific Calculator\n");
    sleep(2);
    printf("Type the initial number of your selection\n");
    sleep(3);
    printf("ARITHMETIC CALCULATIONS\n");
	printf("1- Addition\n");
	printf("11- Subtraction\n");
	printf("111- Multiplication\n");
	printf("1111- Division\n");
    printf("2- Find Modulus\n");
	//printf("ASCII CONVERTER\n");
    //printf("3- ASCII to Character\n");
	//rintf("33- Character to ASCII\n");
    printf("GEOMETRIC CALCULATIONS\n");
	printf("4- to calculate area of circle\n");
	printf("5- to calculate area of square\n");
	printf("6- to calculate area of sphere\n");
	printf("7 - TRIGONOMETRIC FUNCTIONS\n"); //testing menu within menu

	choice = input();
	
	switch (choice) 
	{

	case 1:
	{
		printf("NBR1: \n");
		scanf("%f", &a);
		printf("NBR2: \n");
		scanf("%f", &b);
		printf("NBR3: \n");
		scanf("%f", &c);
		printf("NBR4: \n");
		scanf("%f", &d);
		e=a+b+c+d;
	printf("RESULT= %f", e);
	break;
	}
	case 11:
	{
		printf("NBR1: \n");
		scanf("%f", &a);
		printf("NBR2: \n");
		scanf("%f", &b);
		printf("NBR3: \n");
		scanf("%f", &c);
		printf("NBR4: \n");
		scanf("%f", &d);
		e=a-b-c-d;
		printf ("RESULT= %f", e);
		break;
	}
	case 111:
	{
		printf("NBR1: \n");
		scanf("%f", &a);
		printf("NBR2: \n");
		scanf("%f", &b);
		printf("NBR3: \n");
		scanf("%f", &c);
		printf("NBR4: \n");
		scanf("%f", &d);
		e=a*b*c*d;
		printf ("RESULT= %f", e);
		break;
	}
	case 1111:
	{
		printf("NBR1: \n");
		scanf("%f", &a);
		printf("NBR2: \n");
		scanf("%f", &b);
		printf("NBR3: \n");
		scanf("%f", &c);
		printf("NBR4: \n");
		scanf("%f", &d);
		e=a/b/c/d;
		printf("RESULLT= %f", e);
		break;
	}

	case 2:
	{
		printf("NBR1: \n");
		scanf("%d", &V_);
		printf("NBR2 \n");
		scanf("%d", &y);
		z = V_%y;
		printf("RESULT= %d", z);
		break;
	}
	/*case 3:
	{	
		char asciiCH;
		int  asciiNBR;
		printf("Character: \n");
		scanf("%c", &asciiCH);
		asciiNBR = asciiCH;
		printf("ASCII value of %c = %d", &asciiCH, &asciiNBR);
		break;		
	} */

	case 4: 
	{
		printf("Enter radius:\n");
		num = input();
		result = 3.14 * num * num;
		printf("Area of sphere=");
		output(result);
		break;
	}
	case 5: 
	{
		printf("Enter side of square:\n");
		num = input();
		result = num * num;
		printf("Area of square=");
		output(result);
		break;
	}
	case 6: 
	{
		printf("Enter radius:\n");
		num = input();
		result = 4 * (3.14 * num * num);
		printf("Area of sphere=");
		output(result);
		break;
	}
	case 7: //TESTING
	{
	printf("Choose Function\n");
	printf("77- Sine\n");
	printf("771- Cosine\n");
	printf("772- Tangent\n");
	printf("773- Cotangent\n");
	printf("774- Logarithm\n");
	printf("775- Raise to a power\n");
	printf("776- Root Square\n");
	printf("777- NTH Root\n");
		int choice2;
		choice2=input();
		switch (choice2) //testing
		{
		case 77: //needs a fix
		{
			printf("DEGREES: \n");
			scanf("%lf", &x);
			val=PI/180;
			//ret=sin(x*val);  //there's a problem here...
			printf("The sine of %lf is %lf degrees", x, ret);
			break;
		}
		case 882:
		{
			printf("yeah\n");
			break;
		}
		default: printf("Function Complete");
			break;
		}
		break;

	}
	default:
		printf("wrong Input\n");
	}
	return 0;
}
int input()
{
	int number;
	scanf("%d", &number);
	return (number);
}

void output(float number)
{
	printf("%f", number);
}
