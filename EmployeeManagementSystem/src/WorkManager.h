/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-20 15:00:18
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-07-03 15:16:27
 * @FilePath: \littleprojects\header\workManager.h
 * @Description: ����Ĭ������,������`customMade`, ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once  //��ֹͷ�ļ��ظ�����
#include<iostream>  //�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
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

    //չʾ�˵�
    void Show_Menu();

    //�˳����ܽӿ�
    void ExitSystem();

    //��¼ְ������
    int m_EmpNum;

    //ְ������ָ��
    Worker ** m_EmpArray;

    //���ְ��
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
