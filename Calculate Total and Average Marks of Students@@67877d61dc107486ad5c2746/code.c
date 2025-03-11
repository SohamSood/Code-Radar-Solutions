// Your code here...
#include <stdio.h>
#include <stdlib.h>
struct student {
    int rollno;
    char name[100];
    float marks;
};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%d %s %f",&students[i].rollno,students[i].name,&students[i].marks);
    }
    float count = 0;
    for(int i = 0;i<a;i++) {
        count = count+students[i].marks;
    }
    printf("Total Marks: %.2f \n",count);
    printf("Average Marks: %.2f",count/3);
}