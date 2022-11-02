/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-25 21:14:29
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-06-27 01:34:04
 * @FilePath: \无标题 (工作区)d:\Literature\littleprojects\EmployeeManagementSystem\src\employee.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include"Employee.h"



//构造函数
Employee::Employee(int id, string name, int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

//显示个人信息
void Employee::showInfo()
{
    cout << "职工编号:" << this->m_Id
    << "\t职工姓名:" << this->m_Name
    << "\t岗位:" << this->getDeptName()
    << "\t岗位职责:完成经理交给的任务" << endl;
}

//获取岗位名称
string Employee::getDeptName()
{
    return string("员工");
}
