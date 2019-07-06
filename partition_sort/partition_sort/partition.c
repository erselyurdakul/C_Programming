#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void *partition(void *vpa, size_t size, size_t width, int(*fptest)(const void *))
{
	char *pa = (char *)vpa;
	int cntFit = 0; // counter for those fit with fptest
	int cntDontFit = size - 1; // counter for those don't fit with fptest
	char * partitionArray = (char *)malloc(size * width);
	int i = 0;

	if (partitionArray == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; ++i)
	{
		if (fptest(pa + (i * width)) != 0)
		{
			memcpy(partitionArray + (cntFit * width), pa + (i * width), width);
			cntFit++;
		}
		else
		{
			memcpy(partitionArray + (cntDontFit * width), pa + (i * width), width);
			cntDontFit--;
		}
	}
	memcpy(pa, partitionArray, size * width);
	
	free(partitionArray);

	return pa + (cntDontFit * width);
}


int iseven(const void *vp)
{
	return *(const int *)vp % 2 == 0;
}

int main()
{
	int a[10] = { 555, 870, 13, 122, 240, 984, 296, 521, 746, 525 };


	int *p = (int *)partition(a, 10, sizeof(*a), &iseven);

	for (int k = 0; k < 10; ++k)
		printf("%d ", a[k]);

	printf("\npartition point is %d\n", p - a + 1);

	return 0;
}