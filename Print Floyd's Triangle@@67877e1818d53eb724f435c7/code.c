#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int e = 0;
    for(int i = 1;i<a;i++) {
        for(int j = 0;j<i;j++) {
            e = e+(i);
            printf("%d ",e);
        }
        printf("\n");
    }
}