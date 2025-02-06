#include <stdio.h>
#include <stdlib.h>
int sum(int a) {
    int e = 0;
    int b;
    while (a>0) {
        b = a%10;
        e = e+b;
        a = a/10;
    }
    printf("%d ",&e);
}
int main() {
    int j;
    scanf("%d",&j);
    int *myarr = malloc(j*(sizeof(int)));

}