#include <iostream>

#if 0
使用if 0 进行注释
将#if 0 改为 #if 1 就可以将注释取消

实现在代码预处理阶段就让编译器直接注释掉需要被注释的内容
#endif


// 比如需要写一个函数我需要使用的时候就打开，不要使用时也可以手动关闭
#if 1   // 0:注释代码  1:启动代码
void coutHello()
{
    std::cout << "hello !"<< std::endl;
}
#endif



int main()
{
    std::cout << "hello world !"<< std::endl;
    coutHello();
    std::cin.get();     //作用：实现点按回车后才结束程序
}

