//2020.09.22
//类模板案例：实现一个通用的数组类
/*可以对内置数据类型以及自定义数据类型的数据进行存储
将数据中数据存储到堆区
构造函数中可以传入数组的容量
提供对应的拷贝函数以及operator=防止浅拷贝问题
提供尾插法和尾删法对数组中的数据进行增加和删除
可以通过小标的方式访问数组中的元素
可以获取数组中当前元素个数和数组的容量
*/
#include<iostream>
#include<string>
#include "MyArray.hpp"
using namespace std;
void test01()
{
	MyArray<int>arr1(5);

	MyArray<int>arr2(arr1);

	MyArray<int>arr3(100);
	arr3 = arr1;
}
int main()
{
	test01();
	system("pause");
	return 0;
}