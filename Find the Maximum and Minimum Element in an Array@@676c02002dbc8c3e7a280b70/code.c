#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int j = 0;j<a;j++) {
        scanf("%d",&myarr[j]);
    }
    int max;
    int min;
    for(int i=0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(myarr[i]>myarr[j]) {
                max = myarr[i];
            }
            if(myarr[i]<myarr[j]) {
                min = myarr[i];
            }
        }
    }
    printf("%d %d",min,max);
}