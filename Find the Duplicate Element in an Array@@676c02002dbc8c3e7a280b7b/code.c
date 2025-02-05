#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for (int i =0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    for(int k = 0;k<a;k++) {
        for(int j = 0;j<a;j++) {
            if(myarr[k] == myarr[j+1]) {
                printf("%d",myarr[k]);
                break;
            }
        }
    }
    
}