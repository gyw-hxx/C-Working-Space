#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    void print();
    void query_score();
    void query_payment();
    void query_address();
    void exit_system();

    while(1){
    print();
    printf("学生管理系统");
    print();printf("\n");
    printf("1、查询学生成绩\n");
    printf("2、查询学生住址\n");
    printf("3、查询学生缴费\n");
    printf("4、退出管理系统\n");
    print();
    printf("学生管理系统");
    print();printf("\n");
    printf("输入(1、2、3、4)数字:");
    int number;
    
    if( scanf("%d",&number)!=1){
        printf("你输入的不是数字,请重新输入:");
        while(getchar()!='\n'); //清理缓冲区域
        continue;
    }
   if(number < 1 || number > 4){
            printf("数字不在范围内，请重新输入\n");
            continue;
        }

    switch(number){
        case 1:
            query_score();
            break;

        case 2:
            query_address();
            break;

        case 3:
            query_payment();
            break;
        case 4:
            exit_system();
            break;
    }
    printf("\n");
    }
    return 0;
}

struct Student{    //创建结构体,存储数据，如果后期需要可以升级为本地的数据库
    char name[20];
    int score;
    char address[50];
    int paid;
};

struct Student students [3] = {  //插入数据
    {"Milker",91,"糖心",0},
    {"DouBi_Leng",100,"武汉",1},
    {"xgc",91,"星空",0},
};


void print(){
    printf("--------------------");
}

void query_score(){
    printf("查询学生成绩功能\n");
    char name[20];
    int i;
    printf("请输入学生的姓名:");
    scanf("%s",name);
    while(1){
    for(i=0; i<3; i++){
        if(strcmp(name,students[i].name)==0){
            printf("%s同学的成绩是:%d\n",students[i].name,students[i].score);
            return; //直接退出整个函数
    }
    }
        printf("未找到该学生,请重新输入:");
}
}


void query_address(){
    printf("查询学生地址功能\n");
    char name[20],address[20];
    int i;
    printf("请输入学生的姓名:");
    scanf("%s",name);
    while(1){
    for(i=0; i<3; i++){
        if(strcmp(name,students[i].name)==0){
            printf("%s同学的住址是:%s\n",students[i].name,students[i].address);
            return; //直接退出整个函数
    }
    }
        printf("未找到该学生,请重新输入:");
}

}

void query_payment(){
    printf("查询学生缴费功能\n");
     char name[20];
    int i;
    printf("请输入学生的姓名:");
    scanf("%s",name);
    while(1){
    for(i=0; i<3; i++){
        if(strcmp(name,students[i].name)==0){
            printf("%s同学:%d的缴费状态时\n",students[i].name,students[i].paid);
            return; //直接退出整个函数
    }
    }
        printf("未找到该学生,请重新输入:");
}

}

void exit_system(){
    printf("欢迎下次使用系统!");
    exit(0);
}