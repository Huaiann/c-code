#include"stdio.h"
int n = 0;
int main()
{
	if (n < 99)
	{
		printf("Hellow World!\n");
		n = n + 1;
		main();
	}
	else
		return 0;
}