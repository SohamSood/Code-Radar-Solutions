#include <stdio.h>
#include <stdlib.h>
int sum(int a) {
    int e = 0;
    int b;
    if(a<0) {
        a = a-(2*a);
    }
    while (a>0) {
        b = a%10;
        e = e+b;
        a = a/10;
    }
    printf("%d ",e);
}
int main() {
    int j;
    scanf("%d",&j);
    int *myarr = malloc(j*(sizeof(int)));
    for(int p = 0;p<j;p++) {
        scanf("%d",&myarr[p]);
    }
    for (int k=0;k<j;k++) {
        sum(myarr[k]);
    }
}