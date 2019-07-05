#include <stdio.h>
#include <stdlib.h>

int* multMat(int n, int** mat1, int** mat2)
{
    int i, j, a, b;
    int** res;

    res = (int**) malloc(n*sizeof(int*));
    for (i = 0; i < n; i++)
        res[i] = (int*) malloc(n*sizeof(int));
    
    res[0][0] = (mat1[0][0] * mat2[0][0]) + (mat1[0][1] * mat2 [1][0]);
    res[0][1] = (mat1[0][0] * mat2[0][1]) + (mat1[0][1] * mat2 [1][1]);
    res[1][0] = (mat1[1][0] * mat2[0][0]) + (mat1[1][1] * mat2 [1][0]);
    res[1][0] = (mat1[1][0] * mat2[0][1]) + (mat1[1][1] * mat2 [1][1]);

    //return res;
}

int main(void)
{
    int i, j;
    int a[2][2] = {{1, 2},
                   {2, 4}};
    int b[2][2] = {{-1, 3},
                    {4, 2}};
    int c[2][2]; int *p;
    /*
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++)
            printf("%2d ", b[i][j]);
        printf("\n");
    }
    */
   *p = &c;
   *p = multMat(2, &a, &b);
    return 0;
}