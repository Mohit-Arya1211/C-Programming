#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    int a,b,c,d;
    float r;
    printf("Enter 2 Integers : \n");
    scanf("%d %d", &a, &b);
    printf("\n Press \n 1 to ADD \n 2 to SUBTRACT \n 3 to MULTIPLY \n 4 to DIVIDE \n");
    scanf("%d", &c);
    switch(c)
    {

    case 1 :
        r = a + b;
        printf("\n The Sum is %f", r);
        break;
    case 2 :
        r = a - b;
        printf("\n The Difference is %f", r);
        break;
    case 3 :
        r = a * b;
        printf("The Product is %f", r);
        break;
    case 4 :
        r = a / b;
        printf("The Dividend is %f", r);
        break;
    default :
        printf("ERROR : Enter the correct choice");
    }
    getch();
}
