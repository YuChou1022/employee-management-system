#include "employee.h"


//构造函数
Employee::Employee(int id,string name,int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Employee::ShowInfo()
{
	cout << "职工编号：" << this->m_Id << "\t职工姓名：" << this->m_Name << "\t岗位" << this->getDeptName() << "岗位职责：完成任务" << endl;
}

//获取岗位名称
string Employee::getDeptName()
{
	return "员工";
}