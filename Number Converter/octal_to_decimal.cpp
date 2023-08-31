#include<iostream>
#include<cmath>
using namespace std;

int check(char a){
    switch(a){
    case '0':{
        return 0;
        break;
    }
    case '1':{
        return 1;
        break;
    }
    case '2':{
        return 2;
        break;
    }
    case '3':{
        return 3;
        break;
    }
    case '4':{
        return 4;
        break;
    }
    case '5':{
        return 5;
        break;
    }
    case '6':{
        return 6;
        break;
    }
    case '7':{
        return 7;
        break;
    }
    case '8':{
        return 8;
        break;
    }

}



}

int main(){

    string oct;
    cout << "Enter a Octal Number: ";
    cin >> oct;

    int decimal = 0;
    int base = 8;

    for(int i = ( oct.length() - 1),n = 0; i >= 0; i--,n++){
        int last = oct.at(i);
        decimal = decimal + ( check(last)* pow(base, n) );
    }

    cout << "Decimal is " << decimal << endl;

 return 0;
}

