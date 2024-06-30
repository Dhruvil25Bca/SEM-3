#include <stdio.h>
#include <conio.h>
int main()
{
	int i,a[50],pos,val,num;
	clrscr();
	printf("\n how many element you want to store in array:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\n Enter element of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the array element position for insert the value(not more than array store value): ");
	scanf("%d",&pos);//pos is store array index
	if(pos>num)
	{
		printf("\n you enter wrong value of pos!");
	}
	else
	{

	printf("Enter the value to insert ele. value:");
	scanf("%d",&val);
	 a[pos]=val;
	 printf("\n final array elements");
	 for(i=0;i<num+1;i++)
	 {
	 printf("\n a[%d]=%d",i,a[i]);
	 }
	}
	return 0;

}
