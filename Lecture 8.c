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

    student(string pss, string n, int i) {
        name = n;
        // age = a;
        id =i;
        passcode = pss;
    }

    void into() {
        cout << "My name is " << name << "  , my id is " << id << "  and passcode is " << passcode<< endl;
    }


};

int main()
{
    student s1;
    student s2("110","Harsh", 3);

    return 0;
}



QUESTION -2



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

    student(string pss, string n, int i) {
        this ->name = n;
        // age = a;
        this ->id =i;
        this ->passcode = pss;
    }

    void into() {
        cout << "My name is " << name << "  , my id is " << id << "  and passcode is " << passcode<< endl;
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




QUESTION -3



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

    student(string passcode, string name, int id): name(name), passcode(passcode), id(id) {

    }

    void into() {
        cout << "My name is " << name << "  , my id is " << id << "  and passcode is " << passcode<< endl;
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
