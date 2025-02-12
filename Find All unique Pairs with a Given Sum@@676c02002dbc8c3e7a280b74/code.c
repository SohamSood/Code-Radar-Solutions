#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b;

    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p=0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    scanf("%d",&b);
    for(int i =0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(i!=j) {
                if((myarr[i] +myarr[j])==b) {
                    printf("%d %d \n",myarr[i],myarr[j]);
                }
            } 
        }
    }
}