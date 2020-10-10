#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//set_difference�
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
	vector<int>vTarget_1;
	vector<int>vTarget_2;
	vTarget_1.resize(min(v1.size(),v2.size()));//��������С���
	vTarget_2.resize(min(v1.size(),v2.size()));

	cout<<"v1������ " ;
	printV(v1);
	cout<<"v2������ " ;
	printV(v2);

	//��ȡ�
	//�����v1
	vector<int>::iterator it_end_v1 = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget_1.begin());//���Ϊ����������
	cout<<"�����v1Ŀ�������� " ;
	//�������ע��
	for_each(vTarget_1.begin() , it_end_v1 , Myprint());
	cout<<endl;

	//�����v2
	vector<int>::iterator it_end_v2 = set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),vTarget_2.begin());//���Ϊ����������
	cout<<"�����v2Ŀ�������� " ;
	//�������ע��
	for_each(vTarget_2.begin() , it_end_v2 , Myprint());
	cout<<endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}