#include <iostream>

int main() {
    char A[] = "decimal";
    char B[] = "medical";

    int i , H[26] = {0};

    for(i=0;A[i]!= '\0'; i++) {
        H[A[i]-97] += 1;
    }

    for(i=0; B[i] != '\0';i++) {
        if(H[B[i]-97] < 0) {
            cout<<"Not anagram";
            break;
        }
    }

    if(B[i] == '\0') {
        cout<<"Its Anagram";
    }
}