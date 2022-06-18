#include<stdio.h>
#include<stdlib.h>


int main(){

    int A[10]={1,2,3,4,5};        // Array in stack
    int *p;     // declaring an pointer to access an array through heap

    p=(int *)malloc(5*sizeof(int));    // Array in Heap
    p[0]=5;
    A[0]=3;
    for (int i=0;i<5;i++){
        p[i]=i+2;
    }   
    for (int i=0;i<5;i++){
        printf("%d ",p[i]);     // 2 3 4 5 6
    
    }printf("\n");
    for (int i=0;i<10;i++){
        printf("%d ",A[i]);    //3 2 3 4 5 0 0 0 0 0        
    } 
    return 0;
}

