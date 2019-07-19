#include<stdio.h>
#include<conio.h>
void main()
{
    int i; char c;
    printf("Enter the integer here : ");
    scanf("\n %d",&i);
    printf("\n Enter the character here : ");
    scanf("\n %c", &c);
    printf("The ASCII value of Character %c is %d", c,c);
    printf("\n The Integer value of ASCII code %d is %c", i,i);
    getch();
}
