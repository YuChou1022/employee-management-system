#include<iostream>
#include<cstdlib>
using namespace std;
#include "workermanager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
int main()
{
	//测试代码（已注释：程序启动时不会再打印张三、李四、周扒皮这三条测试数据）
	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "周扒皮", 3);
	//worker->showInfo();
	//delete worker;

	//实例化管理者对象
	WorkerManager wm;

	int choice = 0;//记录用户选项

	while (true)
	{
		wm.Show_Menu();
		cout << "请选择操作" << endl;
		cin >> choice;//接受选项

		switch(choice)
		{
		case 0:   //退出系统
			wm.exitSystem();
			break;
		case 1:   //增加职工
			wm.Add_Emp();
			break;
		case 2:   //显示职工
			wm.Show_Emp();
			break;
		case 3:   //删除职工
			wm.Del_Emp();
			break;
		case 4:   //修改职工
			wm.Mod_Emp();
			break;
		case 5:   //查找职工
			wm.Find_Emp();
			break;
		case 6:   //排序职工
			wm.Sort_Emp();
			break;
		case 7:   //清空文档
			wm.Clean_File();
			break;
		default:
			system("cls");//清屏
		}
	}

	//调用菜单成员函数
	wm.Show_Menu();
	



	system("pause");
	return 0;
}
