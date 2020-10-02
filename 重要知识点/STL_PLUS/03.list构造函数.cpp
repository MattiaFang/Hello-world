//2020.10.02
#include<iostream>
#include<list>
using namespace std;

void printList( const list<int>&L)
{
	for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
	{
		cout << *it <<" ";
	}
	cout<<endl;
}

//list���캯��
void test01()
{
	//����list����
	//Ĭ�Ϲ���
	list<int> L1;
	//�������
	L1.push_back(20);
	L1.push_back(40);
	L1.push_back(60);
	L1.push_back(80);

	//��������
	printList(L1);

	//���乹��
	list<int> L2(L1.begin(),L1.end());
	printList(L2);

	//��������
	list<int>L3(L2);
	printList(L3);

	//elem����
	list<int>L4(5,100);//5��100
	printList(L4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}