//2020.10.01
#include<iostream>
#include<queue>
#include<string>
using namespace std;

//����Quenen����
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age  = age;
	}
	string m_Name;
	int m_Age;
};
void test01()
{
	//׼������
	Person p1("С��",12);
	Person p2("��Ϊ",22);
	Person p3("��ҫ",17);
	Person p4("����",32);
	Person p5("ƻ��",28);
	//�ص�:�����Ƚ��ȳ����ݽṹ
	queue<Person> q;

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	cout << "���еĴ�СΪ�� "<<q.size()<<endl;
	//ֻҪ���в�Ϊ�գ��鿴��ͷ�Ͷ�β����ִ�г�ջ����
	while(!q.empty())
	{
		//�鿴��ͷ
		cout<<"��ͷԪ�� ����Ϊ��"<< q.front().m_Name<<" ����Ϊ��"<<q.front().m_Age<<endl;

		//�鿴��ͷ
		cout<<"��βԪ�� ����Ϊ��"<< q.back().m_Name<<" ����Ϊ��"<<q.back().m_Age<<endl;
		
		cout<<"��ջ����������������������"<<endl;
		//��ջ
		q.pop();
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}