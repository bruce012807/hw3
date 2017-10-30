#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum status { c, w, l };
int rolldice();
int main()
{
	int sum, mypoint;
	enum status gamestatus;
	srand(time(NULL));
	sum = rolldice();
	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = w;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = l;
		break;
	default:
		gamestatus = c;
		mypoint = sum;
		printf("Point is %d\n",mypoint);
		break;
	}
	while (gamestatus == c)
	{
		sum = rolldice();
		if (sum == mypoint) { gamestatus = w; }
		else { if (sum == 7) { gamestatus = l; } }
	}
	if (gamestatus == w) { printf("Player wins\n"); }
	else { printf("Player loses\n"); }
	system("pause");
	return 0;
}
int rolldice()
{
	int d1,d2,worksum;
	d1 = 1 + (rand() % 6);
	d2 = 1 + (rand() % 6);
	worksum = d1 + d2;
	printf("Player rolled %d + %d = %d\n",d1,d2,worksum);
	return worksum;
}