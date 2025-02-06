#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i= 1;i<a;i++) {
        for(int j = 0;j<a-i;j++) {
            printf(" ");
        }
        for(int t = 1;t<=i;t++) {
            printf("%d",t);
        }
        for(int y = 1;y<=i-1;y++) {
            printf("%d",y);
        }
        printf("\n");
    }
}