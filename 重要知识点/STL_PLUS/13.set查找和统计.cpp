#include<iostream>
#include<set>
using namespace std;

void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(60);
	s1.insert(50);

	set<int>::iterator pos = s1.find(40);//�����ǵ�����
	if(pos!= s1.end())
	{
		cout<<"���ҵ�Ԫ�أ�"<<*pos<<endl;
	}
	else
	{
		cout<<"δ���ҵ�"<<endl;
	}

	//ͳ��
	//set������Ԫ��ͳ�Ƶĸ���ֻ�����ֿ��ܣ�0��1
	int num1 = s1.count(50);
	cout<<"50Ԫ�ظ�����"<<num1<<endl;
	int num2 = s1.count(66);
	cout<<"60Ԫ�ظ�����"<<num2<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}