#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    int e = 0;
    for(int i = 0;i<100;i++) {
        for(int j = 0;j<100;j++) {
            if(a[i] == b[j]) {
                e++;
            }
        }
    }
    if(strlen(a)==strlen(b) == e)  {
        printf("Yes");
    } else {
        printf("No");
    }
}