#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i= 0;i<a;i++) {
        for(int j = a;j>i;j--) {
            printf(" ");
        }
        for(int i = i;i<a;i++) {
            printf("*");
        }
        printf("\n");
    }
}