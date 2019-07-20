#include<stdlib.h>
#include<stdio.h>

int add() //int 返回值整数
{
	return 1000;
}

void main()
{
	printf("%d", add()); //%d，整数打印
	system("pause");
}


//C,C++ main可以不返回或者返回
//普通函数必须返回值
//C编译松散，结果容易出错。C++编译严格一些，结果会正确。
//add中的 return如果注释掉，C不返回不会报错，但会有垃圾结果