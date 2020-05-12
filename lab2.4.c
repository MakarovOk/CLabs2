#include <stdio.h>
#include <conio.h>


int main(int argc, char* argv[]) 
{

    double array[2][2] = { {1, 2}, {3, 4} };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%lf ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int n = array[0][0];
    int b = array[1][1];
    array[0][0] = array[0][1];
    array[0][1] = n;
    array[1][1] = array[0][0];
    array[0][0] = b;
    n = array[1][0];
    array[1][0] = array[0][0];
    array[0][0] = n;
   
    

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%lf ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}