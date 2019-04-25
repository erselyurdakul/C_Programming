#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 0;
	printf("kare alani hesaplamak icin 1e \ndikdortgen alani hesaplamak icin 2ye basin\n");
	scanf("%d", &x);

	if (x == 1)
	{

		int kareninKenari = 0;

		printf("karenin bir kenarini giriniz : \n");
		scanf("%d", &kareninKenari);
		printf("karenin alani = %d\n", kareninKenari * kareninKenari);
	}
	else if (x == 2)
	{

		int kisaKenar, uzunKenar;
		printf("kisa kenari ve uzun kenari giriniz : \n");
		scanf("%d%d", &uzunKenar, &kisaKenar);
		printf("dikdortgenin alani : %d\n", kisaKenar*uzunKenar);
	}
	else
	{
		printf("hatali kod\n");
	}
	return 0;
}
