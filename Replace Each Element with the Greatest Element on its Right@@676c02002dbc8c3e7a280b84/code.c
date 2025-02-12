// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    int *myarr2= malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    for(int i =0;i<a;i++) {
        for(int j= 0;j<a;j++) {
            if(myarr[i]>myarr[j] && i<j) {
                myarr2[i] = myarr[i];
            }
        }
    }
    for(int k = 0;k<a;k++) {
        printf("%d ",myarr2[k]);
    }

}