#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++) {
        for(int k = a-i;k<a;k++) {
            printf(" ");
        }
        for(int j = 0;j<a;j++) {
            printf("*");
        }
        printf("\n");
    }
}