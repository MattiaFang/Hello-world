//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//�����㷨binary_search
//����ָ��Ԫ�أ��ҵ��ͷ���true���Ҳ�������false
//�������в����ԣ���

void test01()
{
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}

	//����  �Ƿ���8Ԫ��
	bool ret=binary_search(v.begin(),v.end(),8);
	if(ret == true)
	{
		cout<<"�ҵ��˸�Ԫ�أ�"<<endl;
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