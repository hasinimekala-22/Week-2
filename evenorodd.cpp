#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    if(n%2 == 0){
        cout << "Given "<< n << " is an even number" << endl;
    }
    else {
        cout << "Given" << n << "is an odd number" << endl;
    }
    return 0;
}