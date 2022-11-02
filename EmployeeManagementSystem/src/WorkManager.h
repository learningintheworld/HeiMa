/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-20 15:00:18
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-07-03 15:16:27
 * @FilePath: \littleprojects\header\workManager.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once  //防止头文件重复包含
#include<iostream>  //包含输入输出流头文件
using namespace std;//使用标准命名空间
#include<Worker.h>
#include<Employee.h>
#include<Manager.h>
#include<Boss.h>

class WorkManager
{
private:
    /* data */
public:
    WorkManager(/* args */);

    //展示菜单
    void Show_Menu();

    //退出功能接口
    void ExitSystem();

    //记录职工人数
    int m_EmpNum;

    //职工数组指针
    Worker ** m_EmpArray;

    //添加职工
    void Add_Emp();

    ~WorkManager();
};

/*
WorkManager::WorkManager()
{
}


WorkManager::~WorkManager()
{
}
*/
