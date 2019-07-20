#include<stdlib.h> 
//头文件：C编译器会自动查找，C++编译器不会自动查找
//#include将文件拷贝过来，当做文件解析。<>表示系统目录查找include文件，""表示先在当前目录下查找，没找到去系统目录下查找，<>可以用""替换，反之不可。
//同一个解决方案内，不可有同名文件

//void=返回值为空，int=返回值为空(in linux)
//()参数

void main(void) //(void)和()都代表参数为空
{
	//#include <stdio.h> //任何地方都可以用include
	system("tasklist");//查看进程
	system("echo hello world");//参数不同，结果不同
	system("pause");//暂停
	return; //返回为空，后面的语句不执行
	system("echo hello china");//本条不执行，上面已经return了。
}
/*
项目说明
1.第一步
2.第二步
*/