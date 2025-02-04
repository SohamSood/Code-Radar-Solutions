#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for (int i = 0;i<a;i++) {
        if(i == 0 || i == a-1) {
            for (int j = 0;j<a;j++) {
                printf("*");
            }
            printf("\n");
        }
        else {
            printf("*");
            for(int k = 0;k<a-2;k++) {
                printf(" ");
            }
            printf("* \n");
        }
    }
}