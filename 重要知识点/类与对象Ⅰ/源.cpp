//ѧ��ѧ�Ŷ�д����
//2020.8.10
#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	//�������Ժ���Ϊͳһ��Ϊ��Ա
	//����  ��Ա���� ��Ա����
	string s_name;//����
	int s_no;//ѧ��
	//��Ϊ  ��Ա���� ��Ա����
	//��ʾ������ѧ��
	void showStudent()
	{
		cout<<s_name<<"  "
			<<s_no<<endl;
	}
	//��������ѧ�Ÿ�ֵ
	void setName(string name)
	{
		s_name =name;
	}
	void setID(int no)
	{
		s_no =no;
	}
};

int main()
{
	Student s1;
	//s1.s_name="��ɽ";
	//s1.s_no=10001;
	s1.setID(10001);
	s1.setName("����");
	s1.showStudent();
	system("pause");
	return 0;
}