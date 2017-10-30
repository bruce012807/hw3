#include <stdio.h>
#include <stdlib.h>
int square(int y);
int main()
{
	int x;
	for (x = 1; x <= 10; x++)
	{
		printf("%d",square(x));
		puts("");
	}
	system("pause");
	return 0;
}
int square(int y)
{
	return y*y;
}