#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b = (2*a)-1;
    for (int i=0;i<a;i++) {
        for(int j = 1;j<a-i;j++) {
            printf("*");
        }
        for(int k = 0;k<a;k=k+2) {
            printf("*");
        }
        printf("\n");
    }

}