#include <iostream>
using namespace std;
// One method
void perm(char S[], int k) {
    static int A[10] = {0};
    static char Res[10];
    int i;

    
    if(S[k] == '\0') {
        Res[k] = '\0';
        cout<<Res;
    }
    else {
        for(i=0;S[i] != '\0'; i++) {
        if(A[i]==0) {
            Res[k]=S[i];
            A[i]=1;
            perm(S, k+1);
            A[i]=0;
        }
    }

    }
}

// void swap(int* x, int* y) {
//     int temp;
//     temp = int* x;
//     int* x = int* y;
//     int* y = temp;
// }

void perm2(char S[], int l, int h) {
    int i;
    if(l==h) {
        printf(s);
    }
    else {
        for(i=0; i <= h; i++) {
            swap(S[l], S[i]);
            perm2(S,l+1, h);
            swap(S[l], S[i]);
        }
    }
}

int main() {
    class S[] = 'ABC';
    perm(s,0);
}