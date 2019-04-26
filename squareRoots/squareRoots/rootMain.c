#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	while (1)
	{
		int a = 0;
		int b = 0;
		int c = 0;
		float x1 = 0;
		float x2 = 0;
		double delta = 0;

		printf("xkare'nin sabitini girin : ");
		scanf("%d", &a);
		printf("x'in sabitini girin : ");
		scanf("%d", &b);
		printf("denklemin bagimsiz sabitini girin : \n");
		scanf("%d", &c);

		printf("girdiginiz denklem : %dx^2 + %dx + %d\n\n", a, b, c);
		delta = (b*b) - (4 * a*c);

		if (delta < 0)
		{
			printf("denklemin reel kökü yoktur.\a\a\a\n");
		}
		else if (delta == 0)
		{
			x1 = x2 = (-b + sqrt(delta)) / (2 * a);
			printf("esit iki kökü vardýr.\nx1=%.2f\nx2=%.2f\n", x1, x2);
		}
		else
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("iki farkli kökü vardir.\nx1=%.2f\nx2=%.2f\n", x1, x2);
		}
	}
}