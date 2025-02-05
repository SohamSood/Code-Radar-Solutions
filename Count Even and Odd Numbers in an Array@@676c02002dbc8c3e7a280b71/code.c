#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a * (sizeof(int)));
    for (int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    int max = 0;
    for(int j=0;j<a;j++) {
        for(int k = 0;k<a;k++) {
            if(myarr[j] > myarr[k]);
                int max = myarr[j];
        }
    } 
    printf("%d",max);   
}