#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int lko = 1;
    int& min = (a<b)?a:b;
    for(int i = 1; i<min; i++){
        if(a%1 ==0 && b%i==0){
            lko=a;
        }
    }
    cout <<lko<<endl;
    return 0;
}