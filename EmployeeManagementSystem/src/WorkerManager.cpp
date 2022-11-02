/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-06-20 15:00:41
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-07-03 15:57:08
 * @FilePath: \littleprojects\src\workerManager.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include"WorkManager.h"

WorkManager::WorkManager(/* args */)
{
    //初始化属性
    this->m_EmpNum = 0;
    this->m_EmpArray = NULL;
}

//展示菜单
void WorkManager::Show_Menu()
{
    cout << "****************************" << endl;
    cout << "**  欢迎使用职工管理系统  **" << endl;
    cout << "*****  0.退出管理程序  *****" << endl;
    cout << "*****  1.增加职工信息  *****" << endl;
    cout << "*****  2.显示职工信息  *****" << endl;
    cout << "*****  3.删除离职职工  *****" << endl;
    cout << "*****  4.修改职工信息  *****" << endl;
    cout << "*****  5.查找职工信息  *****" << endl;
    cout << "*****  6.按照编号排序  *****" << endl;
    cout << "*****  0.清空所有文档  *****" << endl;
    cout << "****************************" << endl;
    cout << endl;
}

//退出功能接口
void WorkManager::ExitSystem()
{
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0);//退出程序
}

//添加职工
void WorkManager::Add_Emp(){
    cout << "请输入添加职工的数量：" << endl;
    //保存用户的输入数量
    int addNum = 0;
    cin >> addNum;

    if (addNum > 0)
    {
        //添加
        //计算添加新空间大小
        int newSize = this->m_EmpNum + addNum;//新空间的人数

        //开辟新空间
        Worker ** newSpace = new Worker*[newSize];
        
        //将原来空间下数据拷贝到新空间下
        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newSpace[i] = this->m_EmpArray[i];
            }
            
            // 批量添加新数据
            for (int i = 0; i < addNum; i++)
            {
                int id;//职工编号
                string name;//职工姓名
                int dSelect;//部门选择

                cout << "请输入第 " << i+1 << " 个新职工编号：" << endl;
                cin >> id;

                cout << "请输入第 " << i+1 << " 个新职工姓名：" << endl;
                cin >> name;

                cout << "请选择该职工岗位：" << endl;
                cout << "1.普通职工" << endl;
                cout << "2.经理" << endl;
                cout << "3.老板" << endl;
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
                //将创建职工指针保存到数组中
                newSpace[this->m_EmpNum + i] = worker;

            }
            //释放原有的空间
            delete[] this->m_EmpArray;

            //更改新空间的指向
            this->m_EmpArray = newSpace;

            // 更新新的职工人数
            this->m_EmpNum = newSize;

            // 提示添加成功
            cout << "成功添加" << addNum << "名新职工！" << endl;
            
        }
        
    }else{
        cout << "输入数据有误" << endl;
    }
    
    //按任意键后清屏回到上级目录
    system("pause");
    system("cls");

}

WorkManager::~WorkManager()
{
}