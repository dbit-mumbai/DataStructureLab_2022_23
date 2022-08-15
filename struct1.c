
// write structure for 3 student
#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[100];
    float cgpa;
};

int main()
{
    struct student s1;
    s1.roll = 234;
    s1.cgpa = 8.4;
   // s1.name = "YUVRAJ";       this is not possible because array cant reinitialise and string is an array
    strcpy(s1.name,"YUVRAJ");

    printf("student roll number:%d\n",s1.roll);
    printf("student cgpa:%f\n",s1.cgpa);
    printf("student name:%s\n",s1.name);

    printf("\n");

    struct student s2;
    s2.roll = 24;
    s2.cgpa = 7.2;
   // s1.name = "YUVRAJ";       this is not possible because array cant reinitialise and string is an array
    strcpy(s2.name,"JAYRAM");

    printf("student roll number:%d\n",s2.roll);
    printf("student cgpa:%f\n",s2.cgpa);
    printf("student name:%s\n",s2.name);

    printf("\n");

    struct student s3;
    s3.roll = 123;
    s3.cgpa = 5.2;
   // s1.name = "YUVRAJ";       this is not possible because array cant reinitialise and string is an array
    strcpy(s3.name,"RATHOD");

    printf("student roll number:%d\n",s3.roll);
    printf("student cgpa:%f\n",s3.cgpa);
    printf("student name:%s\n",s3.name);
    
  
return 0;
}

