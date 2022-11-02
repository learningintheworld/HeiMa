/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-25 21:06:53
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-06-27 01:58:06
 * @FilePath: \无标题 (工作区)d:\Literature\littleprojects\EmployeeManagementSystem\src\worker.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include<iostream>
using namespace std;
#include<string>

//职工抽象类
class Worker
{
private:
    /* data */
public:
    Worker(/* args */);

    //显示个人信息
    virtual void showInfo() = 0;
    //获取岗位名称
    virtual string getDeptName() = 0;

    //职工编号
    int m_Id;
    //职工姓名
    string m_Name;
    //部门编号
    int m_DeptId;

    //virtual ~Worker() = 0;
};

Worker::Worker()
{
}
/*
Worker::~Worker()
{
}
*/