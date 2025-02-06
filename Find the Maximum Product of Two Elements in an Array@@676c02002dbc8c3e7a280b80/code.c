#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int max = 0;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    for(int i= 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(i!=j) {
                if((myarr[i]*myarr[j])>max) {
                    max = (myarr[i]*myarr[j]);
                }
            }
        }
    }
    printf("%d",max);
}