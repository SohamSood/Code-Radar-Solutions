#include <stdio.h>
#include <stdlib.h>


int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int h = 0;h<a;h++ ) {
        scanf("%d",&myarr[h]);
    }
    int max = 0;
    for(int i = 0;i<a;i++) {
        if(myarr[i]>max) {
            max = myarr[i];
        }
    }
    printf("%d",max);
}