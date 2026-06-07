#include <stdio.h>
#include "order.h" // 必须引入我们自己写的头文件

int main() {
    printf("=== 校园微服务后台启动 ===\n");
    
    // 调用订单模块的函数
    process_order(10086, 25.50);
    
    return 0;
}