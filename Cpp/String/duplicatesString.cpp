#include <iostream>
using namespace std;


int main() {
    //Using Hashing
    char A[] = "finding";
    int H[26];
    for(int i = 0;A[i]!='\0'; i++) {
        H[A[i]-97] += 1;
    }

    for(int i = 0; i < 26; i++) {
        if(H[i]>1) {
            printf("%c", i+97);
            printf("%d", H[i]);
        }
    }


    // Bitwise
    char A[] = "finders";
    long long H = 0;
    long int x =0;

    for(int i = 0; A[i] != '\0'; i++) {
        x = 1;
        x = x<<(A[i]-97);
        if((x&h)>0) {
            printf("%c is Duplicates", A[i]);
        }
        else {
            H=x:H;
        }
    }
}