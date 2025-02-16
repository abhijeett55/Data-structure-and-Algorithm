#include <iostream>

int valid(char* name) {
    int i;
    for(i=0;name[i] != '\0'; i++) {
        if((!name[i]>=65 && name[i]<=90) && (name[i]>=97 && name[i]<=122) && (name[i]>=48 && name[i]<=57)){
            return 0;
        }
        return 1;
    }

    if(valid(name)) {
        printf("valid string!");
    }
    else {
        printf("Invalid String!");
    }

}


int main() {
    char* name = "ANI?321";
    return 0;
}