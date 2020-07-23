#include "hello.h"

void fun(vector<int>& msg){
    for (vector<int>::iterator i = msg.begin(); i != msg.end(); i ++){
        cout << *i << " ";
    }
    cout << endl;
}