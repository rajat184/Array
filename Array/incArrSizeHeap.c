#include<stdio.h>
#include<stdlib.h>
int main(){
    int*p= (int *)malloc(5*sizeof(int));
    int*q= (int *)malloc(10*sizeof(int));
    
    for (int i=0;i<5;i++){
        q[i]=p[i];
    }
    free(p);
    p=q;     //pointing the pointer p to the pointer of array of q
    q=NULL;

    for (int i=0;i<10;i++){
    printf("%d ",p[i]); 
    }

}