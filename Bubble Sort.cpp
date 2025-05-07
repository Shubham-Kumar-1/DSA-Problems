#include<stdio.h>

void Arrayprint(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void Bubblesort(int *a,int n)
{
   for(int i=0;i<n-1;i++)
   {
    int temp;
       for(int j=0;j<n-1-i;j++)
       {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
       }
   }
}
int main()
{
    int a[]={12,45,23,4,50,9,78};
    int n=7;
    Arrayprint(a,n);
    Bubblesort(a,n);
    Arrayprint(a,n);
    return 0;
}