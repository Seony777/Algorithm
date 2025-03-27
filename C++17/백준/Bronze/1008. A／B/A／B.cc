#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
    cin >>a>>b;
    cout << fixed << setprecision(9);
    cout<< (double)a / b<<endl;
    
    return 0;
}