//�������ļ� ���ж�д����
//2020.8.14
#include<iostream>
#include<string>
#include<fstream>//ͷ�ļ�����
using namespace std;

class Person
{
public:
	char m_Name[64];//����
	int m_Age;//����
};

//�������ļ� д�ļ�
void test01()
{
	//1.����ͷ�ļ�
	//2.����������
	ofstream ofs;
	//3.���ļ�
	ofs.open("person.txt",ios::out | ios::binary);
	Person p={"����", 18};
	//4.д�ļ�
	ofs.write((const char*)&p,sizeof(Person));
	//5.�ر��ļ�
	ofs.close();
}

//�������ļ� ���ļ�
void test02()
{
	//1.����ͷ�ļ�
	//2.����������	
	ifstream ifs;
	//3.���ļ� �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt",ios::in | ios::binary);
	if(!ifs.is_open())
	{
		cout<<"�ļ���ʧ��"<<endl;
		return;
	}
	//4.���ļ�
	Person p;
	ifs.read((char*)&p,sizeof(Person));
	cout<<"������ "<<p.m_Name<<endl;
	cout<<"���䣺 "<<p.m_Age<<endl;
	//5.�ر��ļ�
	ifs.close();
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}