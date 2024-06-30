#include<conio.h>
#include<conio.h>

void main()
{
  int a[100],i,n,beg,end,mid,val;
  clrscr();

  printf("\n Enter the size of Array :-  ");
  scanf("%d",&n);
  printf("\n");

   for(i=0 ; i<n ; i++)
    {
     printf("enter the element in Array : ");
     scanf("%d",&a[i]);
    }

  printf("\n enter the search element :-  ");
  scanf("%d",&val);

    beg=0;
    end=n-1;

    for(mid=(beg+end)/2 ; beg<=end ; mid=(beg+end)/2)
    {
       if(a[mid]==val)
       {
	 printf("\n The search element %d found %d position",val,mid+1);
	 break;
       }

      else if(a[mid] < val)
       {
	 beg=mid+1;
       }

	else
	 {
	    end=mid-1;
	 }
    }

    if(beg > end)
     {
      printf("\n !! value not found in Array !!");
     }
   getch();
}
