#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for (int i = 1;i<10+1;i++) {
        int j = a*i;
        printf("%d x %d = %d",a,i,j);
        printf("\n");
    }
}