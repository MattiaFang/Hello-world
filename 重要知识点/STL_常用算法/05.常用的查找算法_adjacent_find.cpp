//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//��������Ԫ��
//������������
class GreatFive
{
public:
	bool operator()(int val)
	{
		return val>5;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(6);
	v.push_back(3);
	v.push_back(3);
	v.push_back(7);
	v.push_back(3);

	//���� 
	vector<int>::iterator ret=adjacent_find(v.begin(),v.end());
	if(ret!=v.end())
	{
		cout<<"�ҵ��������ظ�Ԫ�أ�"<<*ret<<endl;
	}
	else
	{
		cout<<"û���ҵ���"<<endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}