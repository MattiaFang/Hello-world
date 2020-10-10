#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//set_intersection����
class Myprint
{
public:
	void operator()(int val)
	{
		cout<< val <<" ";
	}
};
void printV(vector<int>& v)
{
	for_each(v.begin(),v.end(),Myprint());
	cout<<endl;
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for(int i = 0;i<10;i++)
	{
		v1.push_back(i);
		v2.push_back(i+5);
	}
	vector<int>vTarget;
	vTarget.resize(min(v1.size(),v2.size()));//��������СȡСֵ

	cout<<"v1������ " ;
	printV(v1);
	cout<<"v2������ " ;
	printV(v2);

	//��ȡ����
	vector<int>::iterator it_end = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());//���Ϊ����������
	cout<<"Ŀ�������� " ;
	//����printV(vTarget);
	//�������ע��
	for_each(vTarget.begin() , it_end , Myprint());
	cout<<endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}