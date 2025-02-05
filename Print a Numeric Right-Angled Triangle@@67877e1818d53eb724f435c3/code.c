#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++) {
        for(int k = a-i;k<a;k++) {
            int e = 1;
            printf("%d ",e);
            e++;
        }
        printf("\n");
    }
}