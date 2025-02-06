#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int e = 0
    for(int i = 1;i<a;i++) {
        for(int j = 0;j<i;j++) {
            int e = e+(i+j);
            printf("%d ",e);
        }
        printf("\n");
    }
}