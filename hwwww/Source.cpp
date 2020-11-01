#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{

	int a= 0;
	char input[20][20];
	char output[20][20];
	printf("how many word : ");
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		printf(" enter word : ");
		scanf("%s", input[i]);
		int length = strlen(input[i]);
		int realnumber = length - 1;
		for (int j = 0; j < length; j++)
		{
			output[i][j] = input[i][realnumber];
			realnumber--;
		}
		output[i][length] = '\0';
		printf("the output is %s\n\n",output[i]);
		
	}
	return 0;
}