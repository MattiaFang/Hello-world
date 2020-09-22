//多态案例---电脑组装
//电脑主要组成部件为CPU、显卡、内存条
#include<iostream>
using namespace std;
//抽象不同零件类
//抽象CPU类
class CPU
{
public:
	//抽象计算函数
	virtual void calculator()=0;
};
//抽象显卡类
class VideoCard
{
public:
	//抽象显示函数
	virtual void display() =0;
};
//抽象内存条类
class Memory
{
public:
	//抽象存储函数
	virtual void storage() =0;
};
//抽象电脑类
class Computer
{
public:
	//构造函数
	Computer(CPU *cpu ,VideoCard *vc ,Memory *mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem =mem;
	}
	//析构函数
	//提供析构函数 释放3个电脑零件
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
	//调用每个零件工作的接口
	void work()
	{
		m_cpu->calculator();
		m_vc->display();
		m_mem->storage();
	}
private:
	//构造函数中传入三个零件指针
	CPU *m_cpu;
	VideoCard *m_vc;
	Memory *m_mem;
	//提供工作函数

};

//具体厂商
//Intel厂商
class IntelCPU : public CPU
{
public:
	virtual void calculator()
	{
		cout<<"Intel 的CPU开始计算了"<<endl;
	}
};
class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout<<"Intel 的显卡开始显示了"<<endl;
	}
};
class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout<<"Intel 的内存条开始存储了"<<endl;
	}
};
//Lenovo厂商
class LenovoCPU : public CPU
{
public:
	virtual void calculator()
	{
		cout<<"Lenovo 的CPU开始计算了"<<endl;
	}
};
class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout<<"Lenovo 的显卡开始显示了"<<endl;
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout<<"Lenovo 的内存条开始存储了"<<endl;
	}
};

void test01()
{
	//第一台电脑零件
	CPU * intelCpu = new IntelCPU;
	VideoCard * intelCard = new IntelVideoCard;
	Memory * intelMem = new IntelMemory;

	//创建第一台电脑
	Computer *computer1 = new Computer(intelCpu,intelCard,intelMem);
	computer1->work();
	delete computer1;
}

void test02()
{	
	//第一台电脑零件
	CPU * intelCpu = new IntelCPU;
	VideoCard * intelCard = new IntelVideoCard;
	Memory * intelMem = new IntelMemory;
	cout<<"第一台电脑开始工作"<<endl;
	//创建第一台电脑
	Computer *computer1 = new Computer(intelCpu,intelCard,intelMem);
	computer1->work();
	delete computer1;
	cout<<"============================================"<<endl;
	cout<<"第二台电脑开始工作"<<endl;
	//创建第二台电脑
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