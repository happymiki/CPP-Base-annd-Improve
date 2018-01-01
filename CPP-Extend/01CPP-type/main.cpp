#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    const int a = 100;  // 真正的const
//    a = 100;

//    int *p = &a;

    char *q = (char *)malloc(100);

//    string s;
    bool b = true;
    if (!b){
        cout<<"b value is false"<<endl;
    }
    else
    {
        cout<<"b is ture"<<endl;
    }

    return 0;
}
