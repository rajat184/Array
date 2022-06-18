#include<stdio.h>
int main(){
    int B[5]={1,2,3,4,5};
    int A[6]={2,3,6,3,4,5};
    
    for (int i=0;i<6;i++){
        printf("%d ",A[i]);         // 2 3 6 3 4 5  
        printf("%d ",&A[i]);        // 6422256 6422260 6422264 6422268 6422272 6422276
    }

}