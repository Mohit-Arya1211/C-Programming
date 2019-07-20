#include<stdio.h>
#include<conio.h>
void main()
{

    int a,i,f;
    f = 1;
    printf("Enter the Number : \n");
    scanf("%d", &a);
    for (i = 1; i <=a; ++i)
    {
        f *= i;
    }
    printf("The factorial is : %d \n", f );
    getch();
}
