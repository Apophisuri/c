#include <stdio.h>

int main() {
    int sum = 0;
    int target = 5;

    printf("开始计算 1 到 %d 的累加和...\n", target);

    for(int i = 1; i <= target; i++) {
        sum += i;  // 我们等下要在这里打断点，观察 i 和 sum 的变化
    }

    printf("最终的计算结果是: %d\n", sum);
    
    return 0;
}