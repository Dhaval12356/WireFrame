#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define max 5
int top=-1;
int stack[max];
void push();
void display();
int main()
{
int ch;
while(1)
printf("enter your choice \n1push \n2pop \n3display \n4exit");
scanf("%c",&ch);
switch (ch)

{
case 1:
    push();
    break;

    case 2:
    display();
    break;

    case 3:
    exit(0);

    default:
    printf("wrong choice");
    break;
    return 0;
}
}
void push()
{
    int val;
    if(int==max-1)
    {
        printf("stack overflow");

    }
    else
    {
        printf("insert element you want to insert");
        scanf("%d",&int);
        top=top+1;
        stack[top]=val;
    }
}

void display()
{
    if(top==-1)
    {
        printf("stack empty");
    }
    else
    {
        for (i=top;i>=0;i--)
        {
            printf("%d\t", stack[i]);
        }
    }
}
}
