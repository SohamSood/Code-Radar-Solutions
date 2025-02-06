#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b = (2*a)-1;
    a++;
    for (int i=1;i<a;i++) {
        for(int j = 1;j<a-i;j++) {
            printf(" ");
        }
        for(int k = 0;k<i;k++) {
            printf("*");
        }
        for(int p = 1;p<i;p++) {
            printf("*");
        }
        printf("\n");
    }
    --a;
    for(int i = 1;i<a;i++) {
        for(int p = 0;p<a-i;p++) {
            printf(" ");
        }
        for(int k = 1;k<i;k++) {
            printf(" ");
        }
        for(int j=i;j<=a-i;j++) {
            printf("*");
        }
        printf("\n");
    }

}