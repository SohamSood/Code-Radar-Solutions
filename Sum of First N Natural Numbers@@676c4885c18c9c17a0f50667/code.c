#include <stdio.h>

int main () {
    int a;
    scanf("%d",&a);
    int c = 0;
    for (int j = 0;j<= a;j++) {
        c = c+j;
    }
    printf("%d",c);
}