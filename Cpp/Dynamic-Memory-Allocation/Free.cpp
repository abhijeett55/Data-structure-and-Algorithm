#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int *ptr,*ptr1;
    int n;
     n = 5;

    ptr =(int*)malloc(n * sizeof(int));

    ptr1 = (int*)calloc(n,sizeof(int));

    if (ptr == NULL || ptr1 == NULL) {
        cout << "Allocation Failed\n";
        exit(0);
    }
    else{ 
        cout << "Dynamically Memory Alloated using Malloc\n";
        free(ptr);
        cout << "The Malloc Memory is Freed\n";

        cout << "Dynamically Memory Alloated using Calloc\n";

        free(ptr1);
        cout << "The Calloc Memory is Freed\n";

    }
    return 0;
}