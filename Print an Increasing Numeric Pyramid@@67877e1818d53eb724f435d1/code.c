#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 0;i<a+1;i++) {
        for(int j = 0;j<a-i;j++) {
            printf(" ");
        }
        for(int k= 1;k<=i;k++) {
            printf("%d ",k);
        }
        printf("\n");
    }
}