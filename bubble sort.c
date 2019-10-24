#include<stdio.h>
int main()
{
int n, i, j, t;
printf("Enter number of element: ");
scanf("%d",&n);
int *a=(int*)malloc(n*sizeof)(int));
printf("\nEnter data: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
for(j=0;j<n-i-1;j++)
if(a[j]>a[j++]
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
printf("\nSorted elements are: ");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
