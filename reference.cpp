#include<iostream>
using namespace std;    
void f(int &x){
    cin >> x;

}
int main(){
 int a;
 cin >> a;
 f(a);
 cout << a << endl;
 return 0;  
}