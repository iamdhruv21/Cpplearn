#include<iostream>
using namespace std;

char check(int a){
    if(a == 1){
        return '1';
    }
    else{
        return '0';
    }

}

int main(){
    int decimal;
    cout << "Enter a Decimal Number: ";
    cin >> decimal;

    string reverse_binary;
    int base = 2;

    while(decimal != 0){
        int last = decimal % base;
        reverse_binary = reverse_binary + check(last);
        decimal = decimal / base;
    }

    string binary;
    for(int i = (reverse_binary.length()-1); i >= 0; i--){
        binary = binary + reverse_binary.at(i);
    }
    cout << "Binary Number is " << binary << endl << endl;



 return 0;
}
