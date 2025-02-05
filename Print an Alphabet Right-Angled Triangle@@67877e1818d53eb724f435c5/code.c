#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 0;i<a;i++) {
        for(int j = a-i;j<a;j++) {
            printf("%c",(j+65));
        }
        printf("\n");
    }
}