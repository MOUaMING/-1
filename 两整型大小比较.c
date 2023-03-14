#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
int max(int x,int y);
int a, b,c;
scanf("%d,%d", &a, &b);
 c=max(a, b);
printf("max=%d\n", c);
return 0;
}
int max(int x, int y)
{
	int z ;
	if (x>y)z=x;
	else z = y;
	return(z);
	}
//在键入两数时，两数之间必须用英文逗号隔开，若两个百分号d之间没有英文逗号，则键入信息时也打空格就好！