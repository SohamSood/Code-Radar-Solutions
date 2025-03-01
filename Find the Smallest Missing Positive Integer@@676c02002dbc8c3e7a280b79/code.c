#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
}