#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//�º��� ����ֵ��bool���ͣ���Ϊν��
//һԪν��
class GreaterFive
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
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	//���������� ��û�д���5������
	//GreaterFive() ������������
	if(v.end()==find_if(v.begin(),v.end(),GreaterFive()))
	{
		cout<<"δ�ҵ�����5������"<<endl;
	}
	else
	{
		cout<<"�ҵ��˴���5 ��Ԫ��"<<endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}