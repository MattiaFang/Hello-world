#include<iostream>
#include<string>
#define MAX 1000 // 设置最大人数
using namespace std;
//创建联系人结构体
struct man
{
	string man_Name;//姓名
	int man_Sex;//性别：1表男，2表女
	int man_Year;//年龄
	int man_Number;//联系电话
};

//创建通讯录结构体
struct  Book
{
	struct man manArray[MAX];//通讯录中保存的联系人数组
	int m_Size; //通讯录中人员个数
};

//显示主菜单
void showmain()
{
	cout << "\t*  欢迎来到通讯录管理系统 *" <<endl;
	cout << "\t***************************" <<endl;
	cout << "\t****** 1. 添加联系人 ******" <<endl;
	cout << "\t****** 2. 显示联系人 ******" <<endl;
	cout << "\t****** 3. 删除联系人 ******" <<endl;
	cout << "\t****** 4. 查找联系人 ******" <<endl;
	cout << "\t****** 5. 修改联系人 ******" <<endl;
	cout << "\t****** 6. 清空联系人 ******" <<endl;
	cout << "\t****** 0. 退出通讯录 ******" <<endl;
	cout << "\t***************************" <<endl;
}

//1、添加联系人功能
int add_man(Book *abs)
{
    string name;
	int sex;
	int year;
	int number;
	//判断通讯录是否已满，如果满了就不再添加
	if(abs->m_Size == MAX)
	{	
		cout << "通讯录已满，无法添加！"<<endl;
		return 0;
	}
	else
	{
		cout << "请输入要添加的联系人信息 " <<endl ;
		//姓名
		cout << "请输入姓名： " ;
		cin >> name;
		abs ->manArray[abs->m_Size].man_Name = name;
		//性别
		while(true)
		{
			if (cin.fail())    //判断cin状态，防止输入char整型造成死循环
			{
				cin.clear();
				cin.sync();
			}		
			cout << "请输入性别( 1：男  2：女 )： " ;
			cin >> sex;
			if(sex==1||sex==2)    //输入正确值可继续,否则重新输入
			{	
				abs ->manArray[abs->m_Size].man_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		while(true)
		{
			if (cin.fail())    //判断cin状态，防止输入char整型造成死循环
			{
				cin.clear();
				cin.sync();
			}		
			cout << "请输入年龄： " ;
			cin >> year;
			if(year>0 && year<120)
			{
				abs ->manArray[abs->m_Size].man_Year = year;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//联系电话
		cout << "请输入联系电话： " ;
		cin >> number;
		abs ->manArray[abs->m_Size].man_Number = number;
		//更新通讯录人数
		abs->m_Size++;

		cout << "添加联系人成功！ " <<endl;
		cout << "---------------------------- "<<endl;
		system("pause");
		system("cls");//清屏
		
	}
}

//2、显示联系人功能
void show_man(Book *abs)
{
	//判断通讯录人数是否为空，如果为0，提示为空
	//如果不为0，显示记录的联系人信息
	if(abs->m_Size == 0)
	{
		cout << "当前记录为空"<< endl;
	}
	else
	{
		for(int i=0;i<abs->m_Size;i++)
		{
			cout<<"姓名： "   <<abs->manArray[i].man_Name <<"\t"
				<<"性别： "   <<(abs->manArray[i].man_Sex == 1 ? "男":"女") <<"\t"
				<<"年龄： "   <<abs->manArray[i].man_Year <<"\t"
				<<"联系电话: "<<abs->manArray[i].man_Number <<"\t"
				<<endl;
		}
	}
	system("pause");
	system("cls");
}

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返-1
int isExiet(Book *abs,string name)
{
	for(int i=0;i<abs->m_Size;i++)
	{
		if(abs->manArray[i].man_Name==name)
			return i;
	}
	return -1;
}

//3、删除联系人功能
void del_man(Book *abs)
{
	cout<<"请输入要删除的联系人"<<endl;
	string name;
	cin >> name;
	//ret == -1 未查到联系人
	//ret != -1 查到了联系人
	int ret = isExiet(abs,name);
	if(ret!=-1)
	{
		//查到人就进行删除操作
		for (int i=ret;i<abs->m_Size;i++)
		{
			//数据前移
			abs->manArray[i] = abs->manArray[i+1];
		}
		abs->m_Size--;//更新通讯录的人员数
		cout << "删除成功"<<endl;
	}
	else
	{
		cout<<"查无此人"<<endl;
	}
	system("pause");
	system("cls");
}

//4、查找联系人功能
void find_man(Book *abs)
{
	cout<<"请输入你要查找的联系人"<<endl;
	string name;
	cin>>name;
	int ret = isExiet(abs,name);
	if(ret != -1)//找到联系人
	{
		cout << "姓名："<< abs->manArray[ret].man_Name<<"\t"
			 << "性别："<< abs->manArray[ret].man_Sex<<"\t"
			 << "年龄："<< abs->manArray[ret].man_Year<<"\t"
			 << "联系电话："<< abs->manArray[ret].man_Number<<"\t"
			 << endl;
	}
	else
	{
		cout<<"查无此人"<<endl;
	}
	system("pause");
	system("cls");
}

//5、修改联系人功能
void update_man(Book *abs)
{
	cout<<"请输入你要查找的联系人"<<endl;
	string name;
	int sex;
	int year;
	int number;
	cin>>name;
	int ret = isExiet(abs,name);
	if(ret != -1)//找到联系人
	{
		cout << "姓名："<< abs->manArray[ret].man_Name<<"\t"
			 << "性别："<<(abs->manArray[ret].man_Sex == 1 ? "男":"女")<<"\t"
			 << "年龄："<< abs->manArray[ret].man_Year<<"\t"
			 << "联系电话："<< abs->manArray[ret].man_Number<<"\t"
			 << endl;
		cout << "--------------------------------------"<<endl;
		cout << "请输入要修改的联系人信息 " <<endl ;
		//姓名
		cout << "请输入姓名： " ;
		cin >> name;
		abs ->manArray[ret].man_Name = name;
		//性别
		while(true)
		{
			if (cin.fail())    //判断cin状态，防止输入char整型造成死循环
			{
				cin.clear();
				cin.sync();
			}		
			cout << "请输入性别( 1：男  2：女 )： " ;
			cin >> sex;
			if(sex==1||sex==2)    //输入正确值可继续,否则重新输入
			{	
				abs ->manArray[ret].man_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		while(true)
		{
			if (cin.fail())    //判断cin状态，防止输入char整型造成死循环
			{
				cin.clear();
				cin.sync();
			}		
			cout << "请输入年龄： " ;
			cin >> year;
			if(year>0 && year<120)
			{
				abs ->manArray[ret].man_Year = year;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//联系电话
		cout << "请输入联系电话： " ;
		cin >> number;
		abs ->manArray[ret].man_Number = number;
	}
	else
	{
		cout<<"查无此人"<<endl;
	}
	system("pause");
	system("cls");
}

//6、清空联系人功能
void clean_man(Book *abs)
{
	abs->m_Size = 0;//将当期记录联系人重置为空，做逻辑清空操作
	cout <<"通讯录已清空"<<endl;
	system("pause");
	system("cls");
}

//主函数
int main()
{
	int n;     //定义选项
	
	//创建通讯录结构体变量
	Book abs;
	//初始化通讯录中当前人员个数
	abs.m_Size =0;
	
	//菜单调用
	while(true)
	{
		showmain();//展示菜单栏
		cout << " 请选择你要进行的操作:" << endl;
		cin >> n;
		switch(n)
		{
			case 1://添加联系人
				add_man(&abs);//利用地址传递可以修改参数
				break;
			case 2://显示联系人
				show_man(&abs);
				break;
			case 3://删除联系人
				del_man(&abs);
				break;
			case 4://查找联系人
				find_man(&abs);
				break;
			case 5://修改联系人
				update_man(&abs);
				break;
			case 6://清空联系人
				clean_man(&abs);
				break;
			case 0://退出通讯录
				cout << "已安全退出系统，感谢你的使用，再见！"<<endl;
				system("pause");
				return 0;
				break;
			default :
				cout << "输入错误请再次输入:"<<endl;
				system("pause");
				system("cls");
		}
	}
	system("pause");
	return 0;
}