#include <iostream>
#include <algorithm>

int main(void)
{
	int a[8] = { 2, 2, 2, 4, 4, 6, 7, 8 };
	int c;

	//std::sort(a, a + 8);  //���������������Ҫ������

	c = (std::unique(a, a + 8) - a);

	std::cout << "����ֵ��";
	std::cout << "c = " << c << std::endl;

	//��ӡȥ�غ�������Ա

	std::cout << "ȥ�غ�����飺" << std::endl;
	for (int i = 0; i < c; i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;

	//��ӡ�����������Ա
	std::cout << "���������飺" << std::endl;
	for (int i = 0; i < 8; i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;

	return 0;

}