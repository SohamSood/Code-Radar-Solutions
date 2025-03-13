// Your code here...
int printArray(char myarr[][100],int a) {
    for(int i = 0;i<a;i++) {
        printf("%s \n",myarr[i]);
    }
}
int selectionSort(char myarr[][100], int a) {
    for(int i = 0;i<a-1;i++) {
        for(int j = 0;j<a-1;j++) {
            int y = strcmp(myarr[j],myarr[j+1]);
            if(y > 0) {
                char temp[100];
                strcpy(temp,myarr[j+1]);
                strcpy(myarr[j+1],myarr[j]);
                strcpy(myarr[j],temp);
            }
        }
    }
}