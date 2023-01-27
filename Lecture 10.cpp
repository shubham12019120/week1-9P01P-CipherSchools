QUESTION -1


#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class student {
    string passcode;
    public:
    string name;
    int id;

    student() {

    }

    student(string passcode, string name, int id) {
        this ->name = name;
        // age = a;
        this ->id =id;
        this ->passcode = passcode;
    }

    void into() {
        cout << "My name is " << name << "  , my id is " << id << "  and passcode is " << passcode<< endl;
    }

    void setpass(string s) {
        passcode = s;
    }
    ~student() {

    }


};

int main()
{
    student s1;
    student s2("110","Harsh", 3);
    student s3;
    s3=s2;
    s3.into();



    return 0;
}


QUESTION -2



#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int i;
class A {
    public:

    ~A() {
        i=10;

    }
};

int foo() {
    i=3;
    A ob;
    return i;
}

int main()
{
    cout << foo() << endl;


    return 0;
}
