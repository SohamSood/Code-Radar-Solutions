#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for (int i =0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    for(int i = 0;i<a;i++) {
        for(int j = 1;j<a;j++) {
            if(myarr[i] == myarr[j]) {
                printf("%d",myarr[i]);
                break;
            }
        }
    }
    
}