#include <iostream>
#include <vector>
#include <string>
#include "math/hello.h"

using namespace std;

int main(){
    vector<int> v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(6);
    fun(v);
}