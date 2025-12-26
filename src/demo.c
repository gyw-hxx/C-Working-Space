#include <stdio.h>

void f(int a[10][10], int n) {
    int i = 1, j = n / 2 + 1, k;
    a[1][j] = 1;
    for (k = 2; k <= n * n; k++) {
        i--; j++;
        if (i < 1 && j > n) { i += 2; j--; }
        else if (i < 1) i = n;
        else if (j > n) j = 1;
        if (a[i][j] == 0) a[i][j] = k;
    }
}

int main() {
    int a[10][10] = {0}, i, j, n = 5;  // 显式初始化为0
    f(a, n);
    for (i = 0; i < n; i++) {          // 修正循环条件
        for (j = 0; j < n; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");                  // 添加换行符
    }
    return 0;
}
