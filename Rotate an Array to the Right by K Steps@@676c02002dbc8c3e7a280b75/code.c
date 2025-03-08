#include <stdio.h>
#include <stdlib.h>

int rotate (int *myarr,int a,int k) {
    int *myarr2 = malloc(a*4);
    for(int i = 0;i<k;i++) {
        for(int i = 0;i<a-1;i++) {
            myarr2[i] = myarr[i-1];
        }
        myarr2[0] = myarr[a-1];
        myarr2[a-1] = myarr[a-2];
    }
    for(int i =0;i<a;i++) {
        printf("%d ",myarr2[i]);
    }
}
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int i = 0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    int c;
    c--;
    scanf("%d",&c);
    rotate(myarr,a,c);
}