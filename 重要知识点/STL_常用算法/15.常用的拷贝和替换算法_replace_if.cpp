#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//�滻replace_if
//�������ڵķ��������ľ�Ԫ�ػ�����Ԫ��

//ѡ�����7��
class Mynum
{
public:
	bool operator()(int val)
	{
		return val>7;
	}
};

void test01()
{
	vector<int>v;
	for(int i = 0;i<10;i++)
	{
		v.push_back(i);
	}
	cout<<"�滻ǰ������ " ;
	for(vector<int>::iterator it = v.begin();it!= v.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;

	replace_if(v.begin(),v.end(),Mynum(),0);//Mynum()Ϊѡ�������ڴ���7��Ԫ�أ�0Ϊ��Ԫ��

	cout<<"�滻�������� " ;
	for(vector<int>::iterator it = v.begin();it!= v.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}