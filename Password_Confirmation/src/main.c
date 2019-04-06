#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define RUN_FOR_LOOP	(1)
#define RUN_WHILE_LOOP	(0)
#define PASSWORD		(1234)
#define	TRY_COUNT		(3)

int main()
{
	int i = 0;
	int password = 0;

#if RUN_FOR_LOOP
	printf("Run with For Loop\n\n");
	for ( i = 1; i < TRY_COUNT + 1; i++)
	{
		printf("password\n");
		scanf("%d", &password);
		if (password == PASSWORD)
		{
			printf("sifre dogru\n");
			break;
		}

		printf("tekrar deneyiniz\n");

		if ( i == TRY_COUNT)
		{
			printf("deneme hakkiniz bitti.\n");
		}
	}	
#endif

#if RUN_WHILE_LOOP
	printf("Run with While Loop\n\n");
	while (1)
	{
		i++;
		if (i> TRY_COUNT)
		{
			printf("deneme hakkiniz bitti.\n");
			break;
		}
		printf("password\n");
		scanf("%d", &password);
		if (password == PASSWORD)
		{
			printf("sifre dogru\n");
			break;
		}
		
		printf("tekrar deneyiniz\n");

	}
#endif

	return 0;
}