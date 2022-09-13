#include <iostream>
#include <vector>
using namespace std;
int add(int a, int b);
int jian(int a, int b);
int multip(int a, int b);
int chufa(int a, int b);
//using pf = int(*)(int, int);

int main(int, char**) {
    typedef int(*func) (int, int);
    //typedef decltype(add) *func;
    vector<func> funcs;
    funcs.push_back(add);
    funcs.push_back(jian);
    funcs.push_back(multip);
    cout<<funcs[0]<<": "<<"3 + 2 = "<<funcs[0](2,3)<<endl;
}

int add(int a, int b){
    return a + b;
}

int jian(int a, int b){
    return a - b;
}

int multip(int a, int b){
    return a * b;
}

int chufa(int a, int b){
    return a/b;
}

//修改ssl之后的尝试