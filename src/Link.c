#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#define Len sizeof(struct Student)

//建立链表函数
struct Student
{
    char name[100];
    float score;
    struct Student *next;
};
int n;
struct Student * creaet(){
    struct Student * head;
    struct Student *p1, *p2;
    n=0;
    p1 = p2 =(struct Student *) malloc(Len);
    scanf("%s,%f",&p1->name,&p2->score);
    head = NULL;
    while (p1->name!=0)
    { n = n+1;
      if(n==1)head=p1;
      else p2->next=p1;
      p2=p1;
      p1=(struct Student *) malloc(Len);
      scanf("%s,%lf",&p1->name,&p1->score);
    }
    p2->next=NULL;
    return(head);
}
                          