#include<stdio.h>
int global = 2021;
void test()
{
	printf("test()-- %d\n", global);
}
int main()
{
	test();
	printf("%d\n", global);
	return 0;
}