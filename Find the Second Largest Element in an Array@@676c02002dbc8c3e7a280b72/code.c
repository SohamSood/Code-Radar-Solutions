#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int h = 0;h<a;h++ ) {
        scanf("%d",&myarr[h]);
    }
    int maxx = myarr[0];
    for(int i = 0;i<a;i++) {
        if(myarr[i]>maxx) {
            maxx = myarr[i];
        }
    }
    int min = maxx;
    for(int i =0;i<a;i++) {
        if(myarr[i]<min) {
            min = myarr[i];
        }
    }
    for(int j = 0;j<a;j++) {
        if(myarr[j] != maxx) {
            if (myarr[j]>min) {
                min = myarr[j];
            }
        } 
    }
    if((min == 0)|| (min == maxx)) {
        printf("-1");
    } else {
    printf("%d",min);
    }
}