//2020.8.14
#include<iostream>
#include<string>
#include<fstream>//ͷ�ļ�����
using namespace std;
//�ı��ļ� д�ļ�
void test01()
{
	//1������ͷ�ļ� fstream
	//2��������������
	ofstream ofs;
	//3��ָ���򿪷�ʽ
	ofs.open("test.txt",ios::out);
	//4.д�ļ�
	ofs<<"����������"<<endl;
	ofs<<"�Ա���"<<endl;
	ofs<<"���䣺18"<<endl;
	//5.�ر��ļ�
	ofs.close();

}
//�ı��ļ� ���ļ�
void test02()
{
	//1.����ͷ�ļ�
	//2.����������
	ifstream ifs;
	//3.���ļ� �����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt",ios::in);
	if(!ifs.is_open())
	{
		cout<<"�ļ���ȡʧ��"<<endl;
		return;
	}
	//4.������
	//��һ��
	//char buf[1024]={0};
	//while (ifs >>buf)
	//{
	//	cout<<buf<<endl;
	//}
	//�ڶ���
	//char buf[1024]={0};
	//while(ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf <<endl;
	//}
	//������
	//string buf;
	//while( getline(ifs,buf))
	//{
	//	cout<<buf<<endl;
	//}
	//������
	char c;
	while((c=ifs.get())!=EOF)//EOF end of file
	{
		cout<<c;
	}
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