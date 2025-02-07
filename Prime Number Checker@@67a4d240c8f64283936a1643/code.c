#include <stdio.h>
int prime(int a) {
    if(a == 0 ||a == 1|| a == 2) {
        printf("1 \n");
    } else {
        int e = 0;
        for(int i = 2;i<a;i++) {
            if(a % i == 0) {
                e++;
            }
        }
        if(e == 0) {
            printf("1 \n");
        } else {
            printf("0 \n");
        }
    }
}
int main() {
    int a;
    scanf("%d");
}