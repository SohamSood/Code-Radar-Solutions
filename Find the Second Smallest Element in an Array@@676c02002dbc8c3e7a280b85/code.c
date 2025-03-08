#include <stdio.h>
#include <stdlib.h>

int main()  {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int i =0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    int b = myarr[0];
    for(int i = 0;i<a;i++) {
        if(myarr[i]>b) {
            b = myarr[i];
        }
    }
    int maxx = myarr[0];
    for(int i = 0;i<a;i++) {
        if(myarr[i]<maxx) {
            maxx = myarr[i];
        }
    }
    int min2 = maxx;
    for(int i =0;i<a;i++) {
        if(myarr[i] != b) {
            if(myarr[i]>min2) {
                min2 = myarr[i];
            } 
        }
    }
    printf("%d",min2);
    // if(min2 == maxx) {
    //     printf("-1");
    // } else {
    //     printf("%d",min2);
    // }
}