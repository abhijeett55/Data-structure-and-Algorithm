#include <iostream>

int main() {
    char A[] = "How are you!";
    int vcount=0,rcount =0;
    for(int i = 0; A[i] !='\0'; i++) {
        if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i'|| A[i] == 'o' || A[i] == 'u' || A[i] == 'A'|| A[i] == 'I' || A[i] == 'E' || A[i] == 'O'|| A[i] == 'u') {
            vcount++;
        }
        elseif((A[i]>= 65 && A[i]<= 90)||(A[i]1>=97 && A[i]<=122)) {
            rcount++:;
        }
    }
    printf("%d", word);
}