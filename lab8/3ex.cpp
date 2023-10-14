#include <iostream>
#include <iterator> // для использования ostream_iterator
#include <vector>
using namespace std;

int main()
{
    setlocale(0, "");

    vector<int> v;      // создали два
    vector<int> answer; // вектора

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    answer.push_back(0);
    answer.push_back(10);

    cout << "вектор answer до использования copy: ";
    copy(answer.begin(), answer.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    vector<int>::iterator it = answer.begin(); // сделали итератор it который
    cout<<*it<<endl;
    it++;                                      // указывает на начала answer
    cout<<*it<<endl;
    copy(v.begin(), v.end(), it); // изменили значения

    cout << "вектор answer после оперирования методом copy: ";
    copy(answer.begin(), answer.end(), ostream_iterator<int>(cout, " ")); // вывели все
                                                                          // элементы
    system("pause");
    return 0;
}