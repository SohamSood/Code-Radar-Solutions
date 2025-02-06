#include <stdio.h>
int mai(int a) {
    if(a%2 == 0) {
        for(int i = 0;i<a-1;i= i+2) {
            printf("0 1 ");
        }
    } else if(a == 1) {
        printf("1");
    } else { 
        printf("1 0 1");
        for(int j = 3;j<a;j=j+2) {
            printf(" 0 1 ");
        }
    }
}
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 0;i<a;i++) {
        mai((i+1));
        printf("\n");
    }
}