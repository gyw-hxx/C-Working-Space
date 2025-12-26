#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#define Len sizeof(struct Student)

struct Student
{
   long num;
   float score;
   struct Student *next;  //指向下一个学生节点
};
int n;
struct Student * creat(){
  struct Student * head; //指向第一节点
  struct Student *p1,*p2; //p1指向新创建的节点  p2指向前一个节点
  n=0;
  p1=(struct Student *) malloc(Len);  //在栈申请一个节点,p1指向
  scanf("%ld %f", &p1->num, &p1->score);
  while (p1->num != 0) { //链表构造的核心过程
    n++;
    if(n==1)head=p1;
    else p2->next=p1;  //尾插法
    p2=p1;
    p1=(struct Student *)malloc(Len);
    scanf("%ld %f",&p1->num,&p1->score);
  }
  p2->next=NULL;
  return(head);
}
//建立链表函数

void print(struct Student *head){
  struct Student *p;
  printf("\nNow,The %d records are :\n",n);
  p=head;
  if(head!=NULL)
    do{
      printf("%ld %5.1f\n",p->num,p->score);
      p=p->next;
    }while(p!=NULL);
}
//输出链表的函数

int main(){
  struct Student *head;
  head=creat();
  print(head);
  return 0;
}