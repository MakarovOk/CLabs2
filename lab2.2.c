#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<locale.h>


#define N 10
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");

	double A[N] = { 0 , 2.2 , 3.3 , -4.4 , 5.5 , -6.6 , 7.7 , 8.8 , 9.9 , -10 };

	for (int i = 0; i < N - 1; i++) {
		if (A[i + 1] > 0 && A[i] <= 0) {
			for (int j = i + 1; j > 0; j--) {
				if (A[j - 1] >= 0) {
					
					break;
				}
					
				else {
					int v = A[j];
					A[j] = A[j - 1];
					A[j - 1] = v;
				}
			}
		}
	}
	for (int i = 0; i < N; i++)
		printf("  %.2lf", A[i]);
	return 0;
}
	

	

