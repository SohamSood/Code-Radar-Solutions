#include <stdio.h>
int fxn(int a) {
    for(int i = a;i<=a-i;i++) {
        printf(" ");
    }
    for(int j = 0;j<a;j++) {
        printf("*");
    }
}
int main() {
    int a;
    scanf("%d",&a);
    for (int i=0;i<a;i++) {
        fxn(i);
        printf("\n");
    }

}