#include<stdio.h>
int main()
{
 int push(int stack[],int data,int maxsize,int top)
{ 
    maxsize=4;
    for(int i=0;i<4;i++);
    {
        printf("enter the numbers");
        scanf("%d",&stack[maxsize]);
    } 
    for(int i=0;i<4;i++)
    {
    if(top==maxsize )
    {
        printf("overflow");
    }
    else
    {
        top=top+1;
        stack[top] = data;
    }
    }
 }
 return 0;
}
