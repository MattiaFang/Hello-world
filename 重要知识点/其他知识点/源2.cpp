//�ַ���
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str1[11]="Hello";
	char str2[11]="World";
	char str3[11];
	int len;
	//����str1��str3
	strcpy(str3,str1);
	cout<<"strcpy(str3,str1):"<<str3<<endl;

	//����str1��str2
	strcat(str1,str2);
	cout<<"strcat(str1,str2):"<<str1<<endl;

	//���Ӻ�str1�ĳ���
	len=strlen(str1);
	cout<<"strlen(str1):"<<len<<endl;

	//�Ƚ����ַ�����С����ͬ����0��<С��0��>����0��
	int t = strcmp(str3,str2);
	cout<<"strcmp(str3,str2):"<<t<<endl;
	
	//����һ��ָ�룬ָ���ַ�ch�ĵ�һ�γ��ֵ�λ��
	//�ú��������� str3 �е�һ�γ��� ch �ַ�����λ�ã����δ�ҵ��򷵻� null��
	char ch='o';
	char *rat;
	rat=strchr(str3,ch);
	cout <<"strchr(str3,ch):"<<rat<<endl;

//string��
	cout <<"string�� ��ʵ����ͬ����"<<endl;
	string s1="BOOK";
	string s2="OKYOU";
	string s3;
	
	//����s1��s3
	s3=s1;
	cout<<"s3:"<<s3<<endl;
	//����s1��s2
	s3=s1+s2;
	cout<<"s1+s2:"<<s3<<endl;
	//���Ӻ���ܳ���
	len=s3.size();
	cout<<"s3.size():"<<len<<endl;

	



	system("pause");
	return 0;
}
