#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	int secim = 0;
	float sayi1, sayi2;

	while (1)
	{
		printf("Lutfen yapilacak islemi seciniz : \n");
		printf("1-toplama\n2-cikarma\n3-carpma\n4-bolme\n5-kuvvet\n6-karekok\n");
		printf("cikmak icin 0 giriniz.\n\n\n");
		scanf("%d", &secim);

		if (secim == 0)
		{
			printf("program sonlaniyor");
			break;
		}
		if (secim > 0 && secim < 7)
		{
			printf("1.sayiyi giriniz : ");
			scanf("%f", &sayi1);
			printf("2.sayiyi giriniz : ");
			scanf("%f", &sayi2);
		}
		switch (secim)
		{
		case 1:
			printf("toplam = %f\n", sayi1 + sayi2);
			break;
		case 2:
			if (sayi2 < sayi1)
				printf("fark = %f\n", sayi1 - sayi2);
			else
				printf("fark = %f\n", sayi2 - sayi1);
			break;
		case 3:
			printf("carpim = %f\n", sayi1 * sayi2);
			break;
		case 4:
			printf("bolumu = %f\n", sayi1 / sayi2);
			break;
		case 5:
			printf("%f'nin %f kuvveti = %f\n", sayi1, sayi2, pow(sayi1, sayi2));
			break;
		case 6:
			printf("%f'nin karekoku = %f\n%f'nin karekoku = %f\n", sayi1, sqrt(sayi1), sayi2, sqrt(sayi2));
			break;
		default: printf("gecersiz islem !!!");
			break;
		}

	}
	return 0;

}