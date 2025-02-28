// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    char *myarr = malloc(a*(sizeof(int)));
    for(int p =0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    if(a == 1) {
        printf("%d",myarr[0]);
    } else if(a == 2) {
        int e = (myarr[0]+myarr[1])/2;
        printf("%d",e);
    }
    else if(a%2 != 0) {
        int e = a/2;
        int f = myarr[e];
        printf("%d",f);
    } else {
        int e = a/2;
        int f = (a/2)+1;
        int g = ((myarr[e]+myarr[f])/2);
        printf("%d",g);
    }
}