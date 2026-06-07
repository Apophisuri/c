#include <stdio.h>
#include "order.h"

// 实现处理订单的具体逻辑
void process_order(int order_id, double price) {
    printf("[系统通知] Hello成功接收外卖订单！\n");
    printf("订单编号: %d\n", order_id);
    printf("结算金额: %.2f 元\n", price);
    printf("状态: 正在通知商家备餐...\n");
}