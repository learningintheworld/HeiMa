/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-20 15:00:41
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-07-03 15:57:08
 * @FilePath: \littleprojects\src\workerManager.cpp
 * @Description: ����Ĭ������,������`customMade`, ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include"WorkManager.h"

WorkManager::WorkManager(/* args */)
{
    //��ʼ������
    this->m_EmpNum = 0;
    this->m_EmpArray = NULL;
}

//չʾ�˵�
void WorkManager::Show_Menu()
{
    cout << "****************************" << endl;
    cout << "**  ��ӭʹ��ְ������ϵͳ  **" << endl;
    cout << "*****  0.�˳��������  *****" << endl;
    cout << "*****  1.����ְ����Ϣ  *****" << endl;
    cout << "*****  2.��ʾְ����Ϣ  *****" << endl;
    cout << "*****  3.ɾ����ְְ��  *****" << endl;
    cout << "*****  4.�޸�ְ����Ϣ  *****" << endl;
    cout << "*****  5.����ְ����Ϣ  *****" << endl;
    cout << "*****  6.���ձ������  *****" << endl;
    cout << "*****  0.��������ĵ�  *****" << endl;
    cout << "****************************" << endl;
    cout << endl;
}

//�˳����ܽӿ�
void WorkManager::ExitSystem()
{
    cout << "��ӭ�´�ʹ��" << endl;
    system("pause");
    exit(0);//�˳�����
}

//���ְ��
void WorkManager::Add_Emp(){
    cout << "���������ְ����������" << endl;
    //�����û�����������
    int addNum = 0;
    cin >> addNum;

    if (addNum > 0)
    {
        //���
        //��������¿ռ��С
        int newSize = this->m_EmpNum + addNum;//�¿ռ������

        //�����¿ռ�
        Worker ** newSpace = new Worker*[newSize];
        
        //��ԭ���ռ������ݿ������¿ռ���
        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newSpace[i] = this->m_EmpArray[i];
            }
            
            // �������������
            for (int i = 0; i < addNum; i++)
            {
                int id;//ְ�����
                string name;//ְ������
                int dSelect;//����ѡ��

                cout << "������� " << i+1 << " ����ְ����ţ�" << endl;
                cin >> id;

                cout << "������� " << i+1 << " ����ְ��������" << endl;
                cin >> name;

                cout << "��ѡ���ְ����λ��" << endl;
                cout << "1.��ְͨ��" << endl;
                cout << "2.����" << endl;
                cout << "3.�ϰ�" << endl;
                cin >> dSelect;

                Worker * worker = NULL;
                switch (dSelect)
                {
                case 1:
                    worker = new Employee(id, name, 1);
                    break;
                case 2:
                    worker = new Manager(id, name, 2);
                    break;
                case 3:
                    worker = new Boss(id, name, 3);
                    break;
                
                default:
                    break;
                }
                //������ְ��ָ�뱣�浽������
                newSpace[this->m_EmpNum + i] = worker;

            }
            //�ͷ�ԭ�еĿռ�
            delete[] this->m_EmpArray;

            //�����¿ռ��ָ��
            this->m_EmpArray = newSpace;

            // �����µ�ְ������
            this->m_EmpNum = newSize;

            // ��ʾ��ӳɹ�
            cout << "�ɹ����" << addNum << "����ְ����" << endl;
            
        }
        
    }else{
        cout << "������������" << endl;
    }
    
    //��������������ص��ϼ�Ŀ¼
    system("pause");
    system("cls");

}

WorkManager::~WorkManager()
{
}