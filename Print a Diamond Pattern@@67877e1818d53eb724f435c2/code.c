#include <stdio.h>
int fxn(int i;int a) {
    int b = ((2*a)-1);
    for(int j = 1;j<a;j++) {
        printf(" *");
    }
}
int main() {
    int a;
    scanf("%d",&a);
    for (int i=0;i<a;i++) {
        fxn(i,a);
        printf("\n");
    }

}