#include <stdio.h>
#include <stdlib.h>


int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int h = 0;h<a;h++ ) {
        scanf("%d",&myarr[h]);
    }
    int max = myarr[0];
    for(int i = 0;i<j;i++) {
        for(int j = 0;j<a;j++) {
            if(myarr[i]>myarr[j]);
                max = myarr[i];
        }
    }
    int *myarr2 = malloc((a-1)*sizeof(int));
    for(int l = 0;l<a-1;l++) {
        
    }
}