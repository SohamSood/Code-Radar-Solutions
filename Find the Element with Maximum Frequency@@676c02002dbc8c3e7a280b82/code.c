// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    int *myarr2 = malloc(a*(sizeof(int)));
    for(int p= 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    for(int i=0;i<a;i++) {
        int e = 0;
        for(int j =0 ;j<a;j++) {
            if(myarr[i]==myarr[j]) {
                e++;
                }
            }
        myarr2[i] = e;
    }      
    // for(int i=0;i<a;i++) {
    //     printf("%d ",myarr2[i]);
    // }
    int maxx= myarr2[0];
    int final = myarr[0];
    for(int i = 0;i<a;i++) {
        if(myarr2[i] >= maxx) {
            maxx = myarr2[i];
            if(myarr2[i] == maxx) {
                if(myarr[i] <= myarr[maxx]) {
                    final = myarr[i];
            }
        } 
        }
    }
    printf("%d",final);
}