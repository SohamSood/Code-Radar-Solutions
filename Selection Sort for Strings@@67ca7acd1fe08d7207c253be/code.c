// Your code here...
int printArray(char myarr[][100],int a) {
    for(int i = 0;i<a;i++) {
        printf("%s \n",myarr[i]);
    }
}
int selectionSort(char myarr[][100], int a) {
    for(int i = 0;i<a-1;i++) {
        for(int j = 0;j<a-1;j++) {
            if( (strcmp(myarr[i],myarr[i+1])) > 0) {
                char temp[100];
                strcpy(temp,myarr[i+1]);
                strcpy(myarr[i+1],myarr[i]);
                strcpy(myarr[i],temp);
            }
        }
    }
}