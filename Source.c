#include <stdio.h>

int main()
{
	int number;
	printf("bir sayi girin \n");
	scanf_s("%d", &number);
	if (number == 5)
	{
		printf("%d\n""sifre dogru", number);
	}
	else
	{
		printf("sifre yanlis");
	}
	return 0;
}
