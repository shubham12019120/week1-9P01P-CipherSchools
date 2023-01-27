QUESTION - 1


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class student {

    string passcode;
    friend class bestfriend;

    protected:

    int age;

    public:
    string name;
    int id;

    void into(){
        cout << "My name is " << name << " and my id is " << id<< endl;
    }

    void setter(string s, int a, string n, int i) {
        passcode = s;
        age = a;
        name = n;
        id = i;
    }


    student(int i, string n,string p, int a) {
        id = i;
        passcode =p;
        name = n;
        age =a;

    }

    friend void hacker(student s);
};

void hacker(student s) {
    cout <<s.passcode<<s.age << endl;
}


class bestfriend {
    public:
    void sharingsecret(student s) {
        cout << s.passcode << endl;
        cout << s.age << endl;

    }


};

int main()
{
   student s1("1211", "Akhil","12", 20);
   s1.setter("10010",10, "Mohit", "1");

   bestfriend bff;
   //bff.sharingsecret(s1);
   hacker(s1);



    return 0;
}





QUESTION - 2







#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class student {

    string passcode;
    friend class bestfriend;

    protected:

    int age;

    public:
    string name;
    int id;

    void into(){
        cout << "My name is " << name << " and my id is " << id<< endl;
    }

    //void setter(string s, int a, string n, int i) {
       // passcode = s;
        //age = a;
        //name = n;
        //id = i;
    }


    student(int i, string n,string p, int a) {
        id = i;
        passcode =p;
        name = n;
        age =a;

    }

    friend void hacker(student s);
};

void hacker(student s) {
    cout <<s.passcode<<s.age << endl;
}


class bestfriend {
    public:
    void sharingsecret(student s) {
        cout << s.passcode << endl;
        cout << s.age << endl;

    }


};

int main()
{
   student s1("1211", "Akhil","12", 20);
   student s2;
   s2=s1;
   //s1.setter("10010",10, "Mohit", "1");


   s2.into();

   bestfriend bff;
   //bff.sharingsecret(s1);
   hacker(s1);



    return 0;
}



QUESTION -3




#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class student {

    string passcode;
    friend class bestfriend;

    protected:

    int age;

    public:
    string name;
    int id;

    void into(){
        cout << "My name is " << name << " and my id is " << id<< endl;
    }

    void setter(string s, int a, string n, int i) {
        passcode = s;
        age = a;
        name = n;
        id = i;
    }


    student(int id, string name,string passcode, int age) {


    }

    friend void hacker(student s);
};

void hacker(student s) {
    cout <<s.passcode<<s.age << endl;
}


class bestfriend {
    public:
    void sharingsecret(student s) {
        cout << s.passcode << endl;
        cout << s.age << endl;

    }


};

int main()
{
   student s1();

   int a =12;
   //int* b = &a;
   int*ptri =&a;

   //student*ptrs=&s1;

   //cout << ptrs->name<<endl;
   //cout << (*ptrs).name<<endl;




    return 0;
}
