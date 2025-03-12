// Your code here...
#include <stdio.h>
#include <stdlib.h>
int check(int *myarr,int a,int no) {
    int count = 0;
    int u = no;
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(u == myarr[i]) {
                u++;
                count++;
            }
        }
    }
    printf("%d \n",count);
}
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    int *myarr2 = malloc(a*4);
    for(int p =0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    for(int i = 0;i<a;i++) {
        // myarr2[i] = check(myarr,a,myarr[i]);
        check(myarr,a,myarr[i]);
    }
    // int maxx = 0;
    // for(int i = 0;i<a;i++) {
    //     if(myarr2[i]>maxx) {
    //         maxx= myarr2[i];
    //     }
    // }
    // printf("%d",maxx);
}