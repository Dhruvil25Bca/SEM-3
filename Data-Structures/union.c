#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 6
int main()
{
	int a[3] = {11, 12, 13};
	int b[3] = {10, 11, 12};
	int i;
	int pos,cindex=3,top=-1;
	int c[size];
	clrscr();
	for (i = 0; i < 3; i++)
	{
		c[i] = a[i];
		top = top + 1;
	}
	for (i = 0; i < 3; i++)
	{
		c[3 + i] = b[i];
		top = top + 1;
	}
    // Copy the elements from the second array to the union array
    for (int i = 0; i < 3; i++) {
        int dup = 0;
        for (int j = 0; j < 3; j++) {
            if (b[i] == a[j]) {
                dup = 1;
                break;
            }
        }

        if (!dup) {
            c[cindex] = b[i];
            cindex++;
        }
    }
	printf("\n\n");
	for (i = 0; i <cindex; i++)
	{
		printf("\n c[%d]=%d", i, c[i]);
	}
	getch();
	return 0;
}