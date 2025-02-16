#include <iostream>
int main() {
    // First Method
    // char A[]="python";
    // char B[7];
    // int i;
    // for(i=0;A[i]!= '\0'; i++) {
    //     i =i-1;
    //     for(int j =i;i <=j;i--;j++) {
    //         B[j]=A[i];
    //     }
    //     B[j]='\0';
    // }
    // printf("%s", B);

    //Second Method
    char A[] = "Python";
    char B[7] , t;
    int i , j;
    for(j=0;A[j]!='\0'; j++) {
        j=j-1;

        for(i=0; i <j; i++;j--) {
            t=A[i];
            A[i]=A[j];
            A[j]=t;
        }
        printf("%s", A);
    }
}