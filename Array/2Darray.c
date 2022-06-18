#include<stdio.h>
#include<stdlib.h>
int main(){

    // complete array in stack 
    int A[3][4]={{1,2,3,3},{4,5,6,7},{4,5,6,8}};


    // PARTIAL ARRAY IN STACK AND PARIAL ARRAY IN HEAP
    int *B[3];
    B[0]=(int *)malloc(sizeof(int)*4);
    B[1]=(int *)malloc(sizeof(int)*4);
    B[2]=(int *)malloc(4 * sizeof(int));

    int **c;
    c=(int **)malloc(sizeof(int));




}