#include<stdio.h>
int linear_search(int a[], int n,int data)
{
     int i;
       for(i=0;i<n;i++)
          if(!(a[i]-data))
              return 1;
              return 0;
}
int main()
{
      int a[30],i,n,data;
      printf("\nEnter number of  element: ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("\n Enter data to be search: ");
      scanf("%d",&data);
      if(linear_search(a,n,data)
      prinf("\n  Data Found");
      else
      printf("\n data not found);
      return 0;
}
