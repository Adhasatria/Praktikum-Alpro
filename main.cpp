#include <iostream>
using namespace std;

int power(int x, int y){
    if (y==0){
        return 1;
    }
    return x * power(x,y-1);
}

int main (){
    int basis;
    int pangkat;
    cin>>basis;
    cin>>pangkat;

    cout<<power(basis,pangkat);
    return 0;
}