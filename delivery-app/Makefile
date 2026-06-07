# 定义编译器和编译参数变量
CC = gcc
CFLAGS = -Wall -g

# 最终目标：将所有 .o 文件链接成可执行文件 app
app: main.o order.o
	$(CC) $(CFLAGS) -o app main.o order.o

# 编译 main.c 生成 main.o
main.o: main.c order.h
	$(CC) $(CFLAGS) -c main.c

# 编译 order.c 生成 order.o
order.o: order.c order.h
	$(CC) $(CFLAGS) -c order.c

# 清理编译产生的垃圾文件
clean:
	rm -f *.o app