//2020.09.22
//��ģ�尸����ʵ��һ��ͨ�õ�������
/*���Զ��������������Լ��Զ����������͵����ݽ��д洢
�����������ݴ洢������
���캯���п��Դ������������
�ṩ��Ӧ�Ŀ��������Լ�operator=��ֹǳ��������
�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
����ͨ��С��ķ�ʽ���������е�Ԫ��
���Ի�ȡ�����е�ǰԪ�ظ��������������
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