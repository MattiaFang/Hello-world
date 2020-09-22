//字符串
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str1[11]="Hello";
	char str2[11]="World";
	char str3[11];
	int len;
	//复制str1到str3
	strcpy(str3,str1);
	cout<<"strcpy(str3,str1):"<<str3<<endl;

	//连接str1和str2
	strcat(str1,str2);
	cout<<"strcat(str1,str2):"<<str1<<endl;

	//连接后，str1的长度
	len=strlen(str1);
	cout<<"strlen(str1):"<<len<<endl;

	//比较俩字符串大小（相同返回0，<小于0，>大于0）
	int t = strcmp(str3,str2);
	cout<<"strcmp(str3,str2):"<<t<<endl;
	
	//返回一个指针，指向字符ch的第一次出现的位置
	//该函数返回在 str3 中第一次出现 ch 字符串的位置，如果未找到则返回 null。
	char ch='o';
	char *rat;
	rat=strchr(str3,ch);
	cout <<"strchr(str3,ch):"<<rat<<endl;

//string类
	cout <<"string类 能实现相同作用"<<endl;
	string s1="BOOK";
	string s2="OKYOU";
	string s3;
	
	//复制s1到s3
	s3=s1;
	cout<<"s3:"<<s3<<endl;
	//连接s1到s2
	s3=s1+s2;
	cout<<"s1+s2:"<<s3<<endl;
	//连接后的总长度
	len=s3.size();
	cout<<"s3.size():"<<len<<endl;

	



	system("pause");
	return 0;
}
