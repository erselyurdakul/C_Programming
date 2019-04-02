#include <stdio.h>

int main()
{
	int sayi;
	printf("bir sayi girin \n");
	scanf_s("%d", &sayi);
	if (sayi == 5)
	{
		printf("%d\n""sifre dogru", sayi);
	}
	else
	{
		printf("sifre yanlis");
	}
	return 0;
}