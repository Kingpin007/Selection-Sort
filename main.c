#include <stdio.h>

void selectionSort(int *a,int n);

int main()
{
  int a[10] = {9,7,5,3,1,8,6,2,0,4};
  selectionSort(a,10);
  int i=0;
  for(i=0;i<10;i++)
    printf("%d ",a[i]);
  return 0;
}

void selectionSort(int a[], int n)
{
  int i = 0, small = 2147483647, smallIndex;
  int j = 0;
  for(j=0;j<n;j++)
  {
    for(i=j;i<n;i++)
    {
      if(small > a[i])
      {
        small = a[i];
        smallIndex = i;
      }
    }
    small = 2147483647;
    int temp = a[j];
    a[j] = a[smallIndex];
    a[smallIndex] = temp;
  }
}
