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

//list��ֵ
void test01()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(40);
	L1.push_back(60);
	L1.push_back(80);
	printList(L1);

	list<int>L2;
	L2=L1; //operator=��ֵ
	printList(L2);

	list<int> L3;
	L3.assign(L1.begin(),L1.end());
	printList(L3);

	list<int>L4;
	L4.assign(5,100);//5��100
	printList(L4);

}

//list����
void test02()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(40);
	L1.push_back(60);
	L1.push_back(80);
	L1.push_back(90);
	list<int>L2;
	L2.assign(5,10);//5��100

	cout<<"����ǰ"<<endl;
	cout<<"p1:";
	printList(L1);
	cout<<"p2:";
	printList(L2);
	cout<<"������"<<endl;
	L1.swap(L2);
	cout<<"p1:";
	printList(L1);
	cout<<"p2:";
	printList(L2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}