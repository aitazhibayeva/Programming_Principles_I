#include <iostream>
#include <list>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    set<int> set_t;

    set_t.insert(10);
    set_t.insert(20);
    set_t.insert(30);
    
    list<int> digitals;

    copy(set_t.begin(), set_t.end(), front_inserter(digitals));
    copy(digitals.begin(), digitals.end(), ostream_iterator<int>(cout, " "));

    system("pause");
    return 0;
}