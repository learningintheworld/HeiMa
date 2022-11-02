/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-25 21:53:06
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-06-27 01:33:06
 * @FilePath: \无标题 (工作区)d:\Literature\littleprojects\EmployeeManagementSystem\src\manager.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include"Manager.h"



//构造函数初始化
Manager::Manager(int id, string name, int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

//显示个人信息
void Manager::showInfo()
{
    cout << "职工编号:" << this->m_Id
    << "\t职工姓名:" << this->m_Name
    << "\t岗位:" << this->getDeptName()
    << "\t岗位职责:完成老板交给的任务，并且下发任务给员工" << endl;
}

//获取岗位名称
string Manager::getDeptName()
{ 
    return string("经理");
}
