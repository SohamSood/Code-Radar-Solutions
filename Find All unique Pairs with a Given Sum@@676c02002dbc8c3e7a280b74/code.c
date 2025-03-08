#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b;

    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    int *myarr[100];
    for(int p=0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    scanf("%d",&b);
    int e = 1;
    for(int i =0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if((i!=j)) {
                if(((myarr[i] +myarr[j])==b) && (e != i*j)) {
                    e = i*j;
                    printf("%d %d \n",myarr[i],myarr[j]);    
                }
            } 
        }
    }
}