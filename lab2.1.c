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

	int n, q, z, k, t, flag;
	int A[N];
	int B[N];
	flag = 1; k = 0; t = 0; z = 0;
	printf("N=");
	scanf("%i", &n);
	

	for (int i = 0; i < n; i++)
	{
		printf("a[%i]=", i);
		scanf("%d", &q);
		if (z % 2 != 0 && q % 2 == 0)
		{
			flag = 0;
		}
		z = q;
		if (q > 0) 
		{
			A[k] = q;
			k += 1;
		}
		if (q < 0) 
		{
			B[t] = q;
			t += 1;
		}

	}
	if (flag==0)
	{
		for (int i = k-1; i >= 0; i--)
		{
			printf("%i ",A[i]);
		}printf(" - ¬се положительные числа в обратном пор€дке");
	}
	
	if (flag==1)
	{
		for (int i = t-1; i >= 0; i--)
		{
			printf("%i ",B[i]);
		}printf(" - ¬се отрицательные числа в обратном пор€дке");
	}
	
}	