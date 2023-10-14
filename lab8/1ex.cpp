#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(2);
    v[0] = 1;
    v[1] = 2;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.insert(v.begin(), 0);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.insert(v.end(), 3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    if (v.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "no empty" << endl;
    }

    v.at(3) = 5;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int front_num = v.front();
    int back_num = v.back();
    cout << "front_num " << front_num << endl;
    cout << "back_num " << back_num << endl;
    system("pause");
}