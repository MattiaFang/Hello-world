//2020.10.03
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
//list��֧��l1[0]��L1.at(0)����list�����е�Ԫ��
//ԭ����list���������������������ռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
void test01()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(40);
	L1.push_back(60);
	printList(L1);
	cout<<"��һ��Ԫ���ǣ�"<<L1.front()<<endl;
	cout<<"���һ��Ԫ���ǣ�"<<L1.back()<<endl;

	//list��������˫�򣬲�֧���������
	list<int>::iterator it = L1.begin();
	it++;
	it--;
	//it=it+2;����
}
int main()
{
	test01();
	system("pause");
	return 0;
}