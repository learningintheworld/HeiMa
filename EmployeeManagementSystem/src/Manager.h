/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-25 21:52:57
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-06-27 01:32:32
 * @FilePath: \无标题 (工作区)d:\Literature\littleprojects\EmployeeManagementSystem\src\manager.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Worker.h"

class Manager:public Worker
{
private:
    /* data */
public:
    Manager(int id, string name, int dId);//构造函数初始化

    //显示个人信息
    virtual void showInfo();
    //获取岗位名称
    virtual string getDeptName();

    ~Manager();
};


/*
Manager::Manager()
{
}

Manager::~Manager()
{
}
*/
