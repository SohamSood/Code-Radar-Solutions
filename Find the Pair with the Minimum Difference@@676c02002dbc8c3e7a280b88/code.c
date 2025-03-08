#include <stdio.h>
#include <limits.h>

#include <stdlib.h>


int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a *(sizeof(int)));
    for (int l = 0;l<a;l++) {
        scanf("%d",&myarr[l]);
    }
    for(int i = 0;i<a;i++) {
        for(int j =0;j<a;j++) {
            if(myarr[i]<myarr[j]) {
                int temp = myarr[i];
                myarr[i] = myarr[j];
                myarr[j] = temp;
            }
        }
    }
    int diff = INT_MAX;
    int first = 0;
    int last = 0;
    for(int i =0;i<a-1;i++) {
        if((myarr[i+1]-myarr[i])<diff) {
            diff = myarr[i+1]-myarr[i];
            first = myarr[i];
            last = myarr[i+1];
        }
    }
    printf("%d %d",first,last);
}
