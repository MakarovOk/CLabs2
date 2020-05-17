#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
#include<stdlib.h>

#define N 100


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");

	int n, max, min, q, t, z, flag;
	int A[N];
	q = 0; t = 0; flag = 0; min = 10000;
	printf("N=");
	scanf("%i", &n);
	printf("a[%i]=", 0);
	scanf("%i", &A[0]);
	max = A[0];

	for (int i = 1; i < n; i++)
	{
		printf("a[%i]=", i);
		scanf("%i", &z);
		if (z > max)
		{
			max = z; 
			q = i;
		}
		if (min >= z)
		{
			min = z;
			t = i;
		}
		A[i] = z;
	};
	for (int i = q + 1; i < t - 1; i++)
	{
		for (int j = 0; j<i; j++)
		{
			if (A[i] < A[j+1])
			{
				z = A[i];
				A[i] = A[j+1];
				A[j+1] = z;
			}
		}
	};
	for (int i = 0; i < n;i++)
	{
		printf("%i ", A[i]);
	};
}