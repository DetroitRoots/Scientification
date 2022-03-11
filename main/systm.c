#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int main()
{
    printf("Scientific Calculator Main Menu \n");
    sleep(1);
    printf("Please choose what function do you want to perform.\n");
    sleep(1);

    float a,b,c,d,e =0;
    int z,x,y =0;
    char OP;
    printf("What op do you want?");
    scanf("%c", &OP);
    printf("NBR1:   ");
    scanf("%f", &a);
    printf("NBR2:   ");
    scanf("%f", &b);
    printf("NBR3:   ");
    scanf("%f", &c); //upgraded
    printf("NBR4:   ");
    scanf("%f", &d);
   /* printf("Modulus: ");
    scanf("%d", &z);
    printf("Modulus2: ");
    scanf("%d", &x);*/

    switch (OP)
    {
    case '+': e =a+b+c+d;
        break;
    case '-': e= a-b;
        break;
    case '*': e=a*b*c*d;
        break;
    case '/': e=a/b/c/d;
        break;
        default:printf("\n Invalid");
    }
    printf("Value= %f", e);

    return (0);
}



//Make a menu so user chooses what to perform.


//last step, convert this into a scientific calculator

