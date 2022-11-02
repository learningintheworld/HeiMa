/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-20 14:12:56
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-07-03 16:13:26
 * @FilePath: \littleprojects\Employee_Management_System.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
需求：管理公司内所有员工的信息
目的：利用C++来实现一个基于多态的职工管理系统

公司中职工分为三类:普通员工、经理、老板，显示信息时，需要显示职工编号、职工姓名、职工岗位、以及职责
普通员工职责:完成经理交给的任务
经理职责:完成老板交给的任务，并下发任务给员工
老板职责:管理公司所有事务

所需功能：
退出管理程序:退出当前管理系统
增加职工信息:实现批量添加职工功能，将信息录入到文件中，职工信息为:职工编号、姓名、部门编号
显示职工信息:显示公司内部所有职工的信息
删除离职职工:按照编号删除指定的职工
修改职工信息:按照编号修改职工个人信息
查找职工信息:按照职工的编号或者职工的姓名进行查找相关的人员信息
按照编号排序:按照职工编号，进行排序，排序规则由用户指定
清空所有文档:清空文件中记录的所有职工信息(清空前需要再次确认，防止误删)
*/
#include<iostream>
using namespace std;
#include"WorkManager.h"
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"

int main()
{
/*
    //测试代码
    Worker * worker = NULL;
    worker = new Employee(1,"hsi",1);
    worker->showInfo();
    delete worker;
    

    worker = new Manager(2,"zhe",2);
    worker->showInfo();
    delete worker;

    worker = new Boss(3,"kle",3);
    worker->showInfo();
    delete worker;
*/

    //实例化管理者对象
    WorkManager wm;

    //用来存储用户的选项
    int choice = 0;

    while (true)
    {
        //调用展示菜单成员函数
        wm.Show_Menu();

        cout << "请输入您的选择：" << endl;
        cin >> choice;//接受用户的选择

        switch (choice)
        {
        case 0://退出系统
            wm.ExitSystem();
            break;
        case 1://增加职工
            wm.Add_Emp();
            break;
        case 2://显示职工
            break;
        case 3://删除职工
            break;
        case 4://修改职工
            break;
        case 5://查找职工
            break;
        case 6://排序职工
            break;
        case 7://清空文档
            break;

        default:
            system("cls");//清屏
            break;
        }

    }

    system("pause");
    return 0;
}