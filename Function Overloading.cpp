#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
   return a + b;
}

string add(const string &a, const string &b) {
    return a + b;
}
int main() {
    int i1 = 5, i2 = 7;
    double d1 = 2.5, d2 = 4.1;
    string s1 = "Hello, ",s2 = "world!";

    cout << "int add: "<<add(i1, i2)<<endl;
    cout << "double add: "<<add(d1, d2)<<endl;
    cout << "string add: "<<add(s1, s2)<<endl;
    
    cout << "mixed (int + double): "<< add(i1, (int)d2)<<endl;
    getchar();
    
    return 0;
}