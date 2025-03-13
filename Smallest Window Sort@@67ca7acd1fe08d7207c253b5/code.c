#include <stdio.h>
#include <string.h>

// Your code here...
int findUnsortedSubarray(int *myarr,int a) {
    int myarr2[a];
    for(int i =0;i<a;i++) {
        myarr2[i] = myarr[i];
    }
    for(int i = 0;i<a;i++) {
        for(int j =0;j<a;j++) {
            if(myarr2[i] < myarr2[j]) {
                int temp = myarr2[i];
                myarr2[i] = myarr2[j];
                myarr2[j] = temp;
            }
        }
    }
    int count = 0;
    int sum1= 0;
    int sum2 = 0;
    int e = 0;int f = 0;
    for(int i = 0;i<a;i++) {
        if((myarr[i] != myarr2[i]) &&(e == 0)) {
            sum1 = sum1+i;
            e++;
        }
    }
    for(int i = a-1;i>0;i--) {
        if((myarr[i] != myarr2[i]) &&(f == 0)) {
            sum2 = sum2+i;
            f++;
        }
    } 
    count = sum2 - sum1;
    if(count  == 0) {
        int k = 0;
    } else {
        count++;
    }
    return count;
}









