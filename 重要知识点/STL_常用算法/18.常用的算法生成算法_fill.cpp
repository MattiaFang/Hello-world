#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//fill���   �����������ָ��Ԫ��
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
	vector<int>v;
	v.resize(10);

	cout<<"���ǰ������ " ;
	printV(v);

	fill(v.begin(),v.end(),100);

	cout<<"���������� " ;
	printV(v);

}
int main()
{
	test01();
	system("pause");
	return 0;
}