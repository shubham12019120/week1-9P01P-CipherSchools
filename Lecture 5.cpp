QUESTION-1


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a =12;
    int* p = &a;

    cout << "address of a : " << &a << endl;
    cout << "address of a : " << p << endl;

    return 0;
}



QUESTION-2





#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a =12;
    int* p = &a;

    cout << "value of a : " << *(&a) << endl;
    cout << "value of a : " << *p << endl;

    return 0;
}





QUESTION-3



#include <iostream>

using namespace std;

int main()
{
    int a =12;
    int* p = &a;

    cout << "sizeof(p): "<<sizeof(p) << endl;

    return 0;
}




QUESTION-4




#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a =12;
    int* p = &a;
    char ch = 'a';
    char* pch = &ch;
    if(sizeof(pch) == sizeof(p)) {
        cout << "Hey"<< endl;
    }
    else {
        cout << "Hii"<< endl;

    }



    return 0;
}




QUESTION-5



#include <iostream>

using namespace std;

int main()
{
    int b =12;
    int &a = b;

    int*c = &b;



    return 0;
}
