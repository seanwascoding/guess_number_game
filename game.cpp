#include <iostream>
#include <string>
#include <cstdlib> // 包含 rand() 和 srand() 函數所需的標頭檔
#include <ctime>   // 包含 time() 函數所需的標頭檔

using namespace std;

int main()
{
    //! create random num
    srand(static_cast<unsigned>(time(0)));
    int target = rand() % 101;
    cout << "random num:" << target << endl;

    //! num field
    int filed[] = {0, 100};
    // cout << filed[1] << endl;

    //! guess num == target
    int temp;
    cout << "input the first num:";
    cin >> temp;
    while (true)
    {
        if (temp != target)
        {
            if (temp > filed[1] || temp < filed[0])
            {
                cout << "wrong num" << endl;
                cout << filed[0] << "~" << filed[1] << endl;
                cout << "pls enter another num:";
                cin >> temp;
                continue;
            }
            else if (temp > target)
            {
                cout << "bigger than target" << endl;
                filed[1] = temp;
                cout << filed[0] << "~" << filed[1] << endl;
                cout << "pls enter another num:";
                cin >> temp;
            }
            else if (temp < target)
            {
                cout << "smaller than target" << endl;
                filed[0] = temp;
                cout << filed[0] << "~" << filed[1] << endl;
                cout << "pls enter another num:";
                cin >> temp;
            }
        }
        else
        {
            break;
        }
    }

    //! hitting
    cout << "hitting" << endl;

    return 0;
}