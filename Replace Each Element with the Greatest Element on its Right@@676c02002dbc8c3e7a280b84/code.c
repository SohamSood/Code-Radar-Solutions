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
    for(int i = 0;i<a;i++) {
        int maxx=myarr[i+1];
        for(int j = i+1;j<a;j++) {
            if(maxx < myarr[j]) {
                myarr2[i] = myarr[j]; 
            }
        }
    }
    for(int i = 0;i<a;i++) {
        printf("%d ",myarr2[i]);
    }
}