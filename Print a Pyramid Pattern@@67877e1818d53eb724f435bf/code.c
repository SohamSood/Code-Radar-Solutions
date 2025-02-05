#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 0;i<a;i++) {
        for(int j = i;j<a;j++) {
            printf(" ");
        }
        printf("*");
        for(int k = a-i;k<a;k++) {
            printf("**");
        }
        printf("\n");
    }
}