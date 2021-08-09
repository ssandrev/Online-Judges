//Uri2693
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct student{
    char name[100], dir;
    long long dist;
}student;

int compare (const void * a, const void * b);
int cmpstr(const void* a, const void* b);
int compareDir (const void * a, const void * b);

int main(){
    long long i, n_students;
    
    while(scanf("%lld", &n_students) != EOF){
        student students[n_students];

        for (i = 0; i < n_students; i++){
            scanf("%s %c %lld", students[i].name, &students[i].dir, &students[i].dist);
        }



        qsort (students, n_students, sizeof(student), cmpstr);
        qsort (students, n_students, sizeof(student), compareDir);
        qsort (students, n_students, sizeof(student), compare);


        for( i = 0; i < n_students; i++){
            printf("%s\n", students[i].name);
        }
    }
    return 0;
}

int cmpstr(const void* a, const void* b){
    const student *aa = (student *)a;
    const student *bb = (student *)b;
    return strcmp(aa->name, bb->name);
}

int compare (const void * a, const void * b)
{

  student *studentA = (student *)a;
  student *studentB = (student *)b;

  return ( studentA->dist > studentB->dist );
}

int compareDir (const void * a, const void * b)
{

  student *studentA = (student *)a;
  student *studentB = (student *)b;

  return ( studentA->dir > studentB->dir );
}