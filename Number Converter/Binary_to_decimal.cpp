#include<iostream>
#include<cmath>
using namespace std;

int check(char a){
    if(a == '0'){
        return 0;
    }
    else{
        return 1;
    }

}

int main(){

    string bi;
    cout << "Enter a Binary Number: ";
    cin >> bi;

    int decimal = 0;
    int base = 2;

    for(int i = ( bi.length() - 1),n = 0; i >= 0; i--,n++){
        int last = bi.at(i);
        decimal = decimal + ( check(last)* pow(base, n) );
    }

    cout << "Decimal is " << decimal << endl;

 return 0;
}
