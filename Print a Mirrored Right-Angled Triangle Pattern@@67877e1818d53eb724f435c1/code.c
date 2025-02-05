#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++) {
        for(int k = 0;k<a;k++) {
            printf(" ");
        }
        for(int j = 0;j<a;j++) {
            printf("*");
        }
        printf("\n");
    }
}