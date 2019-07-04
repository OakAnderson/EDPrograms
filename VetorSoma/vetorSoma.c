#include <stdio.h>
#include <stdlib.h>

int* prod_vetorial(int* u, int* v, int* p) 
{
    p[0] = u[1]*v[2] - v[1]*u[2];
    p[1] = u[2]*v[0] - v[2]*u[0];
    p[2] = u[0]*v[1] - v[0]*u[1];
}

int main(void)
{
    int v[] = {1,3,5}, u[] = {2,4,6}, p[3];
    printf("%d %d %d\n", v[0], v[1], v[2]);
    printf("%d %d %d\n", u[0], u[1], u[2]);
    prod_vetorial(u,v,p);
    printf("%d %d %d\n", p[0], p[1], p[2]);
}