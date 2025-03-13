// Your code here...
int printArray(char myarr[][100],int a) {
    for(int i = 0;i<a;i++) {
        printf("%s \n",myarr[i]);
    }
}
int selectionSort(char myarr[][100], int a) {
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(strcmp(myarr[i],myarr2[j]) > 0) {
                char temp[100];
                strcpy(temp,myarr2[j]);
                strcpy(myarr2[j],myarr[i]);
                strcpy(myarr[i],temp);
            }
        }
    }
}