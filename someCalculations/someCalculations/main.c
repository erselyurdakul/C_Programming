#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define pi 3.14

int main()
{
	int choise = 0;

	printf("cemberin alani icin 1e basiniz.\n");
	printf("cemberin cevresi icin 2ye basiniz.\n");
	printf("kurenin hacmi icin 3e basiniz.\n");
	printf("silindirin hacmi icin 4e basiniz.\n");
	scanf("%d", &choise);

	if (choise==1)
	{
		float radiusOfCircle = 0;

		printf("cemberin yaricapini giriniz : ");
		scanf("%f", &radiusOfCircle);
		printf("cemberin alani : %f", pi*radiusOfCircle*radiusOfCircle);
	}
	else if (choise == 2)
	{
		float radiusOfCircle = 0;

		printf("cemberin yaricapini giriniz : ");
		scanf("%f", &radiusOfCircle);
		printf("cemberin alani : %f", 2 * pi*radiusOfCircle);
	}
	else if (choise == 3)
	{
		float radiusOfSphere = 0;

		printf("kurenin yaricapini giriniz : ");
		scanf("%f", &radiusOfSphere);
		printf("kurenin hacmi : %f", (4 / 3)*pi*radiusOfSphere*radiusOfSphere*radiusOfSphere);
	}
	else if (choise == 4)
	{
		float radiusOfCylinder = 0;
		int heightOfCylinder = 0;

		printf("silindirin yaricapini giriniz : ");
		scanf("%f", &radiusOfCylinder);
		printf("silindirin yuksekligini giriniz : ");
		scanf("%d", &heightOfCylinder);
		printf("silindirin hacmi : %f", pi*heightOfCylinder*radiusOfCylinder*radiusOfCylinder);
	}
	else
	{
		printf("yanlis kod girdiniz.");
	}

	return 0;
}