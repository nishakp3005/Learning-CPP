#include <bits/stdc++.h>
using namespace std;

void display(set<int> myset) {
    for (set<int>::iterator it = myset.begin(); it != myset.end(); ++it) {
        cout << *it << " ";
    }
}

void display_char(set<char> myset) {
    for (set<char>::iterator it = myset.begin(); it != myset.end(); ++it) {
        cout << *it << " ";
    }
}

void display_string(set<string> myset) {
    for (set<string>::iterator it = myset.begin(); it != myset.end(); ++it) {
        cout << *it << " ";
    }
}

int main() {

    // initializing set
    int myints[] = {75, 23, 65, 42, 13};
    set<int> myset(myints, myints + 5);

    // display set
    cout << "myset contains: ";
    display(myset);

    // reversing a set
    cout << "\nreverse of myset contains:";
    set<int>::reverse_iterator rit;
    display(myset);

    //
    cout << endl;
    cout << "Is the set empty : " << myset.empty() << endl;

    cout << "size of the set : " << myset.size() << endl;

    myset.insert(69);
    myset.insert(30);
    myset.insert(55);
    cout << "after insertion : ";
    display(myset);
    cout << endl;

    set<int>::iterator it = myset.begin();
    ++it;
    myset.erase(it);
    myset.erase(69);
    cout << "after deletion : ";
    display(myset);
    cout << endl;

    int arr[] = {12, 75, 10, 32, 20, 25};
    set<int> first(arr, arr + 3);      // 10,12,75
    set<int> second(arr + 3, arr + 6); // 20,25,32
    first.swap(second);
    cout << "first contains: ";
    display(first);
    cout << endl;
    cout << "second contains: ";
    display(second);
    cout << endl;

    myset.clear();
    cout << "set contains : ";
    display(myset);
    cout << endl;

    set<char> c;
    c.emplace('a');
    c.emplace('b');
    c.emplace('c');
    c.emplace('d');
    c.emplace('e');
    c.emplace('e');
    cout << "set contains : ";
    display_char(c);
    cout << endl;

    set<string> str;
    set<string>::iterator string_it = str.cbegin();
    str.emplace_hint(string_it, "alpha");
    string_it = str.emplace_hint(str.cend(), "omega");
    string_it = str.emplace_hint(string_it, "epsilon");
    string_it = str.emplace_hint(string_it, "beta");
    cout << "str set contains: ";
    display_string(str);
    cout << endl;
    cout << "is alpha present in str set? - " << str.count("alpha") << endl;
    set<string>::iterator str_it = str.find("epsilon");
    cout << *str_it << endl;

    return 0;
}