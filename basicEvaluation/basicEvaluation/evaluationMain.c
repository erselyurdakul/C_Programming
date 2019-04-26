#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char gender;
	int age;
	int height;

	while (1)
	{
		printf("please enter your gender M/F \n");
		scanf("%c", &gender);
		if (gender == 'M' || gender == 'm')
		{
			printf("MALE\n");
			break;
		}
		else if (gender == 'F' || gender == 'f')
		{
			printf("FEMALE\n");
			break;
		}
		else
		{
			printf("Please try again.\a\n");
		}
	}

	printf("Your gender has been saved. \n");

	while (1)
	{
		printf("please enter your age : ");
		scanf("%d", &age);
		if ((18<=age) && (age<=35))
		{
			printf("Your age has been saved. \n");
			break;
		}
		else
		{
			printf("Your age is not suitable for the conditions. \a\n");
			break;
		}
	}

	while (1)
	{
		printf("Please enter your height in centimeters : \n");
		scanf("%d", &height);
		if ((100<=height) && (height<=220))
		{
			printf("Your height has been saved. \n");
			break;
		}
		else
		{
			printf("Please check your height ! \a\n");
		}
	}

	if ((gender == 'M' || gender =='m') && (18<=age<=35 && 165<=height<=200))
	{
		printf("Congratulations, passed the physical tests.\n");
	}
	else if ((gender == 'F' || gender == 'f') && (18<=age<=32 && 155<=height<=200))
	{
		printf("Congratulations, passed the physical tests.\n");
	}
	else
	{
		printf("Sorry, could not passed the physical tests. \a\n");
	}
}