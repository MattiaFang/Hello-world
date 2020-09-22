//��̬����---������װ
//������Ҫ��ɲ���ΪCPU���Կ����ڴ���
#include<iostream>
using namespace std;
//����ͬ�����
//����CPU��
class CPU
{
public:
	//������㺯��
	virtual void calculator()=0;
};
//�����Կ���
class VideoCard
{
public:
	//������ʾ����
	virtual void display() =0;
};
//�����ڴ�����
class Memory
{
public:
	//����洢����
	virtual void storage() =0;
};
//���������
class Computer
{
public:
	//���캯��
	Computer(CPU *cpu ,VideoCard *vc ,Memory *mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem =mem;
	}
	//��������
	//�ṩ�������� �ͷ�3���������
	~Computer()
	{
		if(m_cpu!=NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if(m_vc!=NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if(m_mem!=NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
	//����ÿ����������Ľӿ�
	void work()
	{
		m_cpu->calculator();
		m_vc->display();
		m_mem->storage();
	}
private:
	//���캯���д����������ָ��
	CPU *m_cpu;
	VideoCard *m_vc;
	Memory *m_mem;
	//�ṩ��������

};

//���峧��
//Intel����
class IntelCPU : public CPU
{
public:
	virtual void calculator()
	{
		cout<<"Intel ��CPU��ʼ������"<<endl;
	}
};
class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout<<"Intel ���Կ���ʼ��ʾ��"<<endl;
	}
};
class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout<<"Intel ���ڴ�����ʼ�洢��"<<endl;
	}
};
//Lenovo����
class LenovoCPU : public CPU
{
public:
	virtual void calculator()
	{
		cout<<"Lenovo ��CPU��ʼ������"<<endl;
	}
};
class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout<<"Lenovo ���Կ���ʼ��ʾ��"<<endl;
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout<<"Lenovo ���ڴ�����ʼ�洢��"<<endl;
	}
};

void test01()
{
	//��һ̨�������
	CPU * intelCpu = new IntelCPU;
	VideoCard * intelCard = new IntelVideoCard;
	Memory * intelMem = new IntelMemory;

	//������һ̨����
	Computer *computer1 = new Computer(intelCpu,intelCard,intelMem);
	computer1->work();
	delete computer1;
}

void test02()
{	
	//��һ̨�������
	CPU * intelCpu = new IntelCPU;
	VideoCard * intelCard = new IntelVideoCard;
	Memory * intelMem = new IntelMemory;
	cout<<"��һ̨���Կ�ʼ����"<<endl;
	//������һ̨����
	Computer *computer1 = new Computer(intelCpu,intelCard,intelMem);
	computer1->work();
	delete computer1;
	cout<<"============================================"<<endl;
	cout<<"�ڶ�̨���Կ�ʼ����"<<endl;
	//�����ڶ�̨����
	Computer *computer2 = new Computer( new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
	computer2->work();
	delete computer2;
}

int main()
{
	
	//test01();
	test02();

	system("pause");
	return 0;
}