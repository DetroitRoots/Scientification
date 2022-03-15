#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

#define PI 3.14159265

int input();
void output(float);
int main()
{
	
	float a,b,c,d,e=0;
	int V_,y,z;
	//L16 to 21 -> <math.h>
	double x,ret,val;
	double sin(double x);
	double cos(double x);
	double tanVAL, _NBER;
	double cot,degR, radiant;  //name the other variables again with better names when fixing bugs.
	double log (double x); 



	float result;
	int choice, num;
	printf("Scientific Calculator\n");
    sleep(2);
    printf("Type the initial number of your selection\n");
    sleep(3);
    printf("1- ARITHMETIC CALCULATIONS\n");
	/*printf("1- Addition\n");
	printf("11- Subtraction\n");
	printf("111- Multiplication\n");
	printf("1111- Division\n"); */
    printf("2- Find Modulus\n"); 
	//ASCII CHANGE -3 with another INPUT
	//printf("ASCII CONVERTER\n"); 
    //printf("3- ASCII to Character\n");
	//rintf("33- Character to ASCII\n");
    printf("3- GEOMETRIC CALCULATIONS\n");
	printf("4- TRIGONOMETRIC FUNCTIONS\n"); //testing menu within menu

	choice = input();
	switch (choice) 

	case 1:
	
		{
			{
				printf("11- Addition\n");
				printf("12- Subtraction\n");
				printf("13- Multiplication\n");
				printf("14- Division\n");
				int choice1;
				choice1 = input();
				switch (choice1)
			
			
								
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
					e=a+b+c+d;
					printf("RESULT= %f", e);
					break;
				}
				case 12:
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
				case 13:
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
					case 14:
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

	case 3:
	{
		printf("31- to calculate area of circle\n");
		printf("32- to calculate area of square\n");
		printf("33- to calculate area of sphere\n");
		
			int choice3;
			choice3=input();
			switch (choice3)
		{
				case 31: 
			{
				printf("Enter radius:\n");
				num = input();
				result = 3.14 * num * num;
				printf("Area of sphere=");
				output(result);
				break;

			}
				case 32: 
			{
				printf("Enter side of square:\n");
				num = input();
				result = num * num;
				printf("Area of square=");
				output(result);
				break;
			}
				case 33: 
			{
				printf("Enter radius:\n");
				num = input();
				result = 4 * (3.14 * num * num);
				printf("Area of sphere=");
				output(result);
				break;
			}
			break;

		} break;
	} break;
	case 4: //TESTING
	{
	printf("Choose Function\n");
	printf("41- Sine\n");
	printf("42- Cosine\n");
	printf("43- Tangent\n");
	printf("44- Cotangent\n");
	printf("45- Logarithm\n");
	printf("46- Raise to a power\n");
	printf("47- Root Square\n");
	printf("48- NTH Root\n");
		int choice2;
		choice2=input();
		switch (choice2) //testing
		{
		case 41:
		{
			printf("VALUE: \n");
			scanf("%lf", &x);
			val=PI/180;
			//ret=sin(x*val);
			printf("SIN: %lf DEGREES: %lf ", x, ret);
			break;
		}
		case 42: 
		{
			printf("VALUE: \n");
			scanf("%lf", &x);
			val=PI/180;
			//ret=cos(x*val);
			printf("COS: %lf DEGREES: %lf ", x, ret);
			break;
		} 
		/*case 43:
		{	
			printf("VALUE: \n");
			scanf ("%lf", &_NBER);
			//tanVAL= tan(_NBER);
			printf("TANGENT: %lf=%f", _NBER,tanVAL);
			break;
		}
		case 44:
		{
			printf("VALUE: \n");
			scanf("%lf", &cot);
			//degR=cot(radiant); notclr
			printf("COT: %lf=%lf", cot,radiant);
			break;			//check the formula
		}
		case  45:
		{
			print("VALUE: \n");
			scanf("%lf", &log);
			//ret=log(--);
			printf("LOG: %lf, is: %lf", log, ret);

			break;
		} */
		case 882:
		{
			printf("yeah\n"); // ?
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
