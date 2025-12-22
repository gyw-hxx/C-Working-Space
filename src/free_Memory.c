#include <stdio.h>
#include <stdlib.h>

int main() {
    int *scores;  // 指针，尚未指向任何内存
    int n;
    
    printf("请输入学生数量: ");
    scanf("%d", &n);
    
    // 动态分配：根据实际需要的大小在堆上分配
    scores = (int*)malloc(n * sizeof(int));
    
    if (scores == NULL) {
        printf("内存分配失败！\n");
        return 1;
    }
    
    // 输入成绩
    for (int i = 0; i < n; i++) {
        printf("请输入第%d个学生的成绩: ", i + 1);
        scanf("%d", &scores[i]);
    }
    
    // 计算平均分
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    float average = (float)sum / n;
    printf("平均分: %.2f\n", average);
    
    // 释放动态分配的内存
    free(scores);
    scores = NULL;  // 避免野指针
    
    return 0;
}