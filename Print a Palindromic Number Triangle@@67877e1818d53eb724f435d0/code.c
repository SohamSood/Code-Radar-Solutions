#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    a++;
    for(int i= 1;i<a;i++) {
        for(int j = 0;j<a-i;j++) {
            printf(" ");
        }
        for(int t = 1;t<=i;t++) {
            printf("%d",t);
        }
        for(int y = a-i;y<=i;y++) {
            printf("%d",y);
        }
        printf("\n");
    }
}