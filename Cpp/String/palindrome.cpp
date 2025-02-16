#include <iostream>

int main() {
    char A[] = "painter";
    char B[] = "Painting";

    int i, j;
    for(int i=0; j=0;A[i]!='\0' && B[j] =='\0'; i++; j++) {
        if(A[i] != B[j]) {
            break;
        }
        if(A[i] == B[j]) {
            printf("equal");
        }
        else if(A[i]<B[j]){
            printf("Smaller");
        }
        else {
            printf("Greater");
        }
    }
}