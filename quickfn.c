#include "quickheader.h"

int partition(int arr[],int l,int h)
{
  int pivot=arr[h];
 int i=l-1,j;
for(j=l;j<=h-1;j++)
{
   if(arr[j]<=pivot)
{int temp;
   i++;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}

}
int t;
t=arr[i+1];
arr[i+1]=arr[h];
arr[h]=t;

return i+1;
}


void quicksort(int arr[],int l,int h)
{

if(l<h)
{

 int q=partition(arr,l,h);
quicksort(arr,l,q-1);
quicksort(arr,q+1,h);
}

}



