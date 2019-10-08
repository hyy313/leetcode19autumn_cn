#include <iostream>
#include <algorithm>

int main(void)
{
	int a[8] = { 2, 2, 2, 4, 4, 6, 7, 8 };
	int c;

	//std::sort(a, a + 8);  //对于无序的数组需要先排序

	c = (std::unique(a, a + 8) - a);

	std::cout << "返回值：";
	std::cout << "c = " << c << std::endl;

	//打印去重后的数组成员

	std::cout << "去重后的数组：" << std::endl;
	for (int i = 0; i < c; i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;

	//打印真正的数组成员
	std::cout << "真正的数组：" << std::endl;
	for (int i = 0; i < 8; i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;

	return 0;

}