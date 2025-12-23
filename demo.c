#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

   struct Student{
    char name[100];
    char personality[100];
    struct Student *next;
   };
int main(){
    struct Student a,b,c,*p,*head;
    strcpy(a.name,"Milker");  strcpy(a.personality,"Gay");
    strcpy(b.name,"Doubi_Leng"); strcpy(b.personality,"Good boy");
    strcpy(c.name,"Lev"); strcpy(c.personality,"Good girl");
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    p = head;
    do{
        printf("%s: %s\n",p->name,p->personality);
        p=p->next;
    }while(p!=NULL);
    return 0;
}                                                