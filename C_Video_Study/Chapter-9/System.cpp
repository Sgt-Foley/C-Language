#include <iostream>
using namespace std;
#include "function\System.h"

int main()
{
    int select = 0;
    Addressbooks books;
    books.size = 0; // 初始化，初始数组添加位置
    while (true)    // 循环（while循环取返回值）
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1: // 添加
            addPerson(&books);
            break;
        case 2: // 显示
            showPerson(&books);
            break;
        case 3: // 删除
            deletePerson(&books);
            break;
        case 4: // 查找
            findPerson(&books);
            break;
        case 5: // 修改
            modifyPerson(&books);
            break;
        case 6: // 清空
            cleanPerson(&books);
            break;
        case 0: // 退出
            cout << "See you" << endl;
            system("pause"); // 按任意键继续
            return 0;        // 返回0，while退出
            break;

        default:
            break;
        }
    }
}