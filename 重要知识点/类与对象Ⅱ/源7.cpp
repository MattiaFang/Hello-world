//��̬��̬
//��������1.�м̳й�ϵ 2.������д������麯��
//��̬��̬ʹ��
// �����ָ���������ָ���������
#include<iostream>
using namespace std;
//������
class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout<<"������˵��"<<endl;
	}
};
//Animal���ڲ��ṹ 
//vfpte-�麯������ָ��    vftable-�麯�������ڼ�¼�麯���ĵ�ַ

//è��
class Cat : public Animal
{
public:
	void speak()//�������¸����麯��
	{
		cout<<"Сè��˵��"<<endl;
	}
};
//ִ��˵���ĺ���
//��ַ��� �ڱ༭�׶�ȷ��������ַ
//�����Ҫִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
void doSpeak(Animal &animal)//Animal &animal =cat ����
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);
}

void test02()
{
	cout<<"sizeof Animal = "<<sizeof Animal<<endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}