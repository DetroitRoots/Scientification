#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int input();
float a,b,c,d,e=0;
void output(float);
int main()
{
	float result;
	int choice, num;
	printf("Scientific Calculator\n");
    sleep(2);
    printf("Type the initial number of your selection\n");
    sleep(1);
    printf("ARITHMETIC CALCULATIONS\n");
	printf("1- Addition\n");
	printf("11- Subtraction\n");
	printf("111- Multiplication\n");
	printf("1111- Division\n");
    printf("2- Find Modulus\n");
    printf("3- ASCII converter \n");
    printf("GEOMETRIC CALCULATIONS\n");
	printf("4- to calculate area of circle\n");
	printf("5- to calculate area of square\n");
	printf("6 to calculate area of sphere\n");
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
