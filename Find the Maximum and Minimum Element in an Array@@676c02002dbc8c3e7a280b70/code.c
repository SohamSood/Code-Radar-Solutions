#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int j = 0;j<a;j++) {
        scanf("%d",&myarr[j]);
    }
    int max = myarr[0];
    int min = myarr[0];
    for(int i=0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(myarr[i]>myarr[j]) {
                if(myarr[i]>max) {
                    max=myarr[i];
                }
            }
            if(myarr[i]<myarr[j]) {
                if(myarr[i]<min) {
                    min = myarr[i];
                }
            }
        }
    }
    printf("%d %d",min,max);
}