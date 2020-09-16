#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	if (x != 0)
	{
		if (x < 0)
		{
			printf("%d < 0", x);
		}
		else printf("%d > 0", x);
	}
	else printf("%d = 0", x);
	return 0;
}