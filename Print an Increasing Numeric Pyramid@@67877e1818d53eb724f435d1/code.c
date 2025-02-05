#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 0;i<a;i++) {
        for(int j = i;j<=a-i;j++) {
            printf(" ");
        }
        for(int k = 1;k<=a-j;k++) {
            printf("%d ",k);
        }
        printf("\n");
    }
}