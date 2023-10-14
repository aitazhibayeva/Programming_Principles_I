#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> street; // создали журнал
    int n;

    cout << "Введите количество домов на улице: ";
    cin >> n;                                                    // считываем количество
    cout << "Укажите дом и сколько в нем живет людей: " << endl; // домов

    for (int i = 0; i < n; i++)
    {
        int house, people;
        cout << i << ") Дом ";
        cin >> house;
        cin >> people; // считываем введенные значения
        street.insert(make_pair(house, people));
    }

    int q;
    cout << endl
         << "Введите количество операций: ";
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cout << i << ") ";
        int a;
        cin >> a;

        if (a == 0)
        { // начала первой операция
            int house;
            cout << "Укажите номер дома: ";
            cin >> house;
            if (street.count(house))
            {
                cout << "Количество людей: " << street[house] << endl;
            }
            else
            {
                cout << "Такого дома не существует! " << endl;
            }
        }
        if (a == 1)
        { // начала второй операции
            int deleter;
            cout << "Какой дом удалить: ";
            cin >> deleter;
            if (street.find(deleter) == street.end())
            {
                cout << "Его нет в списке, возможно уже разрушен :)";
            }
            else
            {
                street.erase(street.find(deleter));
                cout << "Элемент удален! " << endl;
            }
        }

        if (a == 2)
        { // начала третьей операции
            int house, people;
            cout << "Какой дом добавить: ";
            cin >> house;
            cout << "Какое количество людей там проживает: ";
            cin >> people;
            street[house] = people;
        }
    }

    return 0;
}