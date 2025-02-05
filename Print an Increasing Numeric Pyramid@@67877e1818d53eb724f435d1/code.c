#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 0;i<a;i++) {
        for(int j = i;j<=a-i;j++) {
            printf(" ");
        }
        for(int k = 1;k<=i;k++) {
            printf("%d ",k);
        }
        printf("\n");
        for(int x = 1;x<=i;x++) {
            printf("%d ",x);
        }
        
    }
}