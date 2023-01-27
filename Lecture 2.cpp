QUESTION 1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int main() {

    cout << sum(5,10);

}



QUESTION 2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxi(int a, int b) {
    if ( a> b) return a;
    return b;
}

int main() {

    cout << maxi(50,47);

}



QUESTION 3

#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>

using namespace std;

int maxi(int a, int b) {
    if (a > b) return a;
    return b;
}
int maxi(int a, int b, int c) {
    if (a > b) {
        if( a > c) return a;
    return c;
}
else {
    if(b >c) return b;
    return c;
    }
}

int maxi(int a, int b, int c, int d) {
    //int n1 = maxi(a,b);
    //int n2 = maxi(c,d);
    //return maxi(n1,n2);
    int n1 = maxi(a,b,c);
    return maxi(n1,d);



}
int main() {
    //max()
    cout << maxi(12,16)<< endl;
    cout << maxi(12,16, 25) << endl;
    cout << maxi(12,16, 25, 18) << endl;
}




QUESTION 4

#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>

using namespace std;
void increment(int a) {
    a++;
    return ;
}
int main() {
    int i =11;
    increment (i);
    cout << i << endl;
    return 0;
}


QUESTION 5




#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void increment(int&a) {
    //(*a)++;
    //int&b

    a++;
    return;
}


int main()
{
    int i =11;
    int j =i;
    //int &j = i;
    j++;

    cout << i << endl;

    return 0;
}
