# find-element


#include<stdio.h>
#include<conio.h>

int main()
{
int A[10],i, n,element;
 printf("enter elements of array");
 for(i=0;i<n;i++)
 {
 scanf("%d",A[i]);
 }
 printf("element tobe searched is:");
 scanf("%d",element);
  for(i=0;i<n;i++)
  {
  if(A[i]==element)
  {
  printf("element is found at %d",i+1);
  return 0;
  }
  return false;
  }
