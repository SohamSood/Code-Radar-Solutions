#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    --a;
    for(int i= 0;i<a;i++) {
        for(int j = a;j>i;j--) {
            printf(" ");
        }
        for(int j = a-i;j<a;j++) {
            printf("*");
        }
        for(int j = (a-i-1);j<a;j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i= a+1;i>0;i--) {
        for(int j = a+1;j>i;j--) {
            printf(" ");
        }
        for(int j = a-i;j<a;j++) {
            printf("*");
        }
        for(int j = (a-i);j<a-1;j++) {
            printf("*");
        }
        printf("\n");
    }
}