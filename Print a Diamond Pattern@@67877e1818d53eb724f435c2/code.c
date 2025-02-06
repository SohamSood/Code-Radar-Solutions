#include <stdio.h>
int fxn(int a) {
    for(int i = 1;i<a;i++) {
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