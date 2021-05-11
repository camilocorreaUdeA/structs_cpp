#include<iostream>
using namespace std;

/*|a|a|a|a|
| | | | |
|b|b|b|b|
|b|b|b|b|
|c|c|c|c|
|d| | | |
|e|e|e|e|
|e|e|e|e|*/

struct MiEstructura{
    int a;
    double b;
    float c;
    char d;
    double e;
};

int main(){
    MiEstructura estructura{100,111.222,5.32,'z',0.000123};
    MiEstructura* ptr = &estructura;
    double* ptr2 = (double*)ptr+3;
    cout<<*ptr2<<endl;    
}
