//2020.10.01
#include<iostream>
#include<stack>
using namespace std;

//ջstack����
void test01()
{
	//�ص�:�����Ƚ�������ݽṹ
	stack<int>s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "ջ�Ĵ�СΪ�� "<<s.size()<<endl;
	//ֻҪջ��Ϊ�գ��鿴ջ������ִ�г�ջ����
	while(!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout<<"ջ��Ԫ��Ϊ��"<<s.top()<<endl;

		//��ջ
		s.pop();
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}