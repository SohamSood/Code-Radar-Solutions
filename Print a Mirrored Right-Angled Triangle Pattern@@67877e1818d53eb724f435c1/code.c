#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++) {
        for(int k = 0;k<i;k++) {
            printf(" ");
        }
        for(int j = a-i;j<a;j++) {
            printf("*");
        }
        printf("\n");
    }
}