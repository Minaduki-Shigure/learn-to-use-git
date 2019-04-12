#include <stdio.h>

int main(void)
{
	int a = 0xcffffff3;
	printf("%x\n", a << 2);
	printf("%x\n", 0xcffffff3 << 2);
	return 0;
}
