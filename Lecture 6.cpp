QUESTION -1



#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a =12;
    int* p1 =&a;
    int** p2 =&p1;
    int*** p3 = &p2;

    cout<< a<< endl;
    cout<< p1<< endl;
    cout<< p2<< endl;
    cout<< p3<< endl;



    return 0;
}


QUESTION -2



#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a =12;
    int* p1 =&a;
    int** p2 =&p1;
    int*** p3 = &p2;


    cout<< *p3 << endl;
    cout<< *(*p3) << endl;
    cout<< **(*p3) << endl;


    return 0;
}




QUESTION -3



#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a =12;
    int* p1 =&a;
    int** p2 =&p1;
    int*** p3 = &p2;

     cout<< a<< endl;
    cout<< *p1<< endl;
    ***p3 = 50;


    cout<< **p2<< endl;
    cout<< ***p3<< endl;


    return 0;
}
