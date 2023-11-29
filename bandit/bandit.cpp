#include <iostream>

using namespace std;

int main(){
    int h,l;
    cin>>h>>l;

    int banki = (h+l)-1;

    cout<<banki-h<< "\n" <<banki-l;
    return 0;
}