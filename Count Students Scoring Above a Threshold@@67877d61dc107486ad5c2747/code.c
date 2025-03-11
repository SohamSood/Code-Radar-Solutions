// Your code here...
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
    float min;
    scanf("%f",&min);
    int count = 0;
    for(int i = 0;i<a;i++) {
        if(students[i].marks > min) {
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d",min,count);
}