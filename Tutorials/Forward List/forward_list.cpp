//
// Created by 김종혁 on 2023/10/31.
//

#include <forward_list>
#include <iostream>

using namespace std;

int main() {
    forward_list<int> flist1;
    forward_list<int> flist2;
    forward_list<int> flist3;

    forward_list<int> flist_emplace1;

    flist1.assign({1, 2, 3});
    flist2.assign(5, 10);
    flist3.assign(flist1.begin(), flist1.end());

    for (int& a : flist1)
        cout << a << " ";

    cout << endl;

    for (int& b : flist2)
        cout << b << " ";

    cout << endl;

    for (int& c : flist3)
        cout << c << " ";

    cout << endl;

    flist_emplace1.emplace_front(1);
    flist_emplace1.emplace_front(100);

    for (int& a : flist_emplace1)
        cout << a << " ";

    return 0;
}