/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-20 14:12:56
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-07-03 16:13:26
 * @FilePath: \littleprojects\Employee_Management_System.cpp
 * @Description: ����Ĭ������,������`customMade`, ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
���󣺹���˾������Ա������Ϣ
Ŀ�ģ�����C++��ʵ��һ�����ڶ�̬��ְ������ϵͳ

��˾��ְ����Ϊ����:��ͨԱ���������ϰ壬��ʾ��Ϣʱ����Ҫ��ʾְ����š�ְ��������ְ����λ���Լ�ְ��
��ͨԱ��ְ��:��ɾ�����������
����ְ��:����ϰ彻�������񣬲��·������Ա��
�ϰ�ְ��:����˾��������

���蹦�ܣ�
�˳��������:�˳���ǰ����ϵͳ
����ְ����Ϣ:ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪ:ְ����š����������ű��
��ʾְ����Ϣ:��ʾ��˾�ڲ�����ְ������Ϣ
ɾ����ְְ��:���ձ��ɾ��ָ����ְ��
�޸�ְ����Ϣ:���ձ���޸�ְ��������Ϣ
����ְ����Ϣ:����ְ���ı�Ż���ְ�����������в�����ص���Ա��Ϣ
���ձ������:����ְ����ţ�������������������û�ָ��
��������ĵ�:����ļ��м�¼������ְ����Ϣ(���ǰ��Ҫ�ٴ�ȷ�ϣ���ֹ��ɾ)
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
    //���Դ���
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

    //ʵ���������߶���
    WorkManager wm;

    //�����洢�û���ѡ��
    int choice = 0;

    while (true)
    {
        //����չʾ�˵���Ա����
        wm.Show_Menu();

        cout << "����������ѡ��" << endl;
        cin >> choice;//�����û���ѡ��

        switch (choice)
        {
        case 0://�˳�ϵͳ
            wm.ExitSystem();
            break;
        case 1://����ְ��
            wm.Add_Emp();
            break;
        case 2://��ʾְ��
            break;
        case 3://ɾ��ְ��
            break;
        case 4://�޸�ְ��
            break;
        case 5://����ְ��
            break;
        case 6://����ְ��
            break;
        case 7://����ĵ�
            break;

        default:
            system("cls");//����
            break;
        }

    }

    system("pause");
    return 0;
}