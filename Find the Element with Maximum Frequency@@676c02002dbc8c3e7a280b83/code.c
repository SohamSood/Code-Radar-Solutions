
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
    int count1 = 0;
    int no = 0;
    for(int i = 0;i<a;i++) {
        int count = 0;
        for(int j =0;j<a;j++) {
            if(myarr[i] == myarr[j]) {
                count++;
            }
        }
        if(count>count1) {
            no = myarr[i];
            count1 = count;
        } else if( count == count1) {
            if(myarr[i]<no) {
                no = myarr[i];
            }
        }
    }
    printf("%d",no);
}