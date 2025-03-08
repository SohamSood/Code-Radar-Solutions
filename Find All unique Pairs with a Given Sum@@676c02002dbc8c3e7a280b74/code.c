// #include <stdio.h>
// #include <stdlib.h>
// int bubbleSort(int *myarr,int a) {
//     for(int i =0;i<a;i++) {
//         for(int j=0;j<a;j++) {
//             if(myarr[i]<myarr[j]) {
//                 int vari = myarr[j];
//                 myarr[j] = myarr[i];
//                 myarr[i] = vari;
//             }
//         }
//     }
// }
int main() {
    int a,b;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p=0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    scanf("%d",&b);
    // bubbleSort(myarr,a);
    for(int i = 0;i<a;i++) {
        for(int j = i+1;j<a;j++) {
            if(myarr[i] +myarr [j] == b) {
                printf("%d %d",myarr[i],myarr[j]);
                printf("\n");
            }
        }
    }
    
}