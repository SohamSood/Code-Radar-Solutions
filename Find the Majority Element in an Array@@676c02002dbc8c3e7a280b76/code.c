#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    int *myarr2 = malloc(a*(sizeof(int)));
    for(int p =0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    
    for(int i = 0;i<a;i++) {
        int count = 0;
        for(int j = 0;j<a;j++) {
            if(myarr[i] == myarr[j]) {
                count++;
            }
        }
        myarr2[i] = count;
    }
    int maxx = myarr2[0];
    for(int i = 0;i<a;i++) {        
        for(int j = 0;j<a;j++) {
            if(myarr[i]<myarr[j]) {
                maxx= myarr[j];
            }
        }
    }
    int count1 = 0;
    int index = 0;
    for(int i = 0;i<a;i++) {        
        if(myarr2[i] == maxx){
            count1++;
            index = i;
        }
    }
    // if(count1 == maxx) {
    //     printf("%d",myarr[index]);
    // } else {
    //     printf("-1");
    // }
    printf("%d %d \n",maxx,count1);
    for(int j = 0;j<a;j++) {
        printf("%d ",myarr2[j]);
    }

}