#include<stdio.h>
#include<conio.h>

void main()
{
  int a[100],n,i,val;
  clrscr();

  printf("\n enter the size of array:-  ");
  scanf("%d",&n);
  printf("\n");

  for(i=0 ; i<n ; i++)
  {
    printf("enter the element in array : ");
    scanf("%d",&a[i]);
  }
   printf("\n\n  enter the search element : ");
   scanf("%d",&val);

    for(i=0 ; i<n ; i++)
     {
	if(a[i]==val)
	 {
	  printf("\n the serch element %d found %d position",a[i],i+1);
	  break;
	 }

     }
      if(i==n)
      {
	printf("\n !! Element Not found In Array !!");
      }
  getch();
}
