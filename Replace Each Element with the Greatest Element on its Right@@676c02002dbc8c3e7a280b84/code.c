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
    for(int i =a;i>0;i++) {
        for(int j=a;j>0;j++) {
            if(myarr[i]<myarr[j]) {
                myarr2[i] = myarr[j];
            }
        }
    }
    for(int k = 0;k<a;k++) {
        printf("%d ",myarr2[k]);
    }

}