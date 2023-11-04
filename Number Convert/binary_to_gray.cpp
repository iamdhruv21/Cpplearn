using namespace std;

void binary_to_grey(){

    string binary;
    cout << "Enter the Binary Number: ";
    cin >> binary;

    string grey;
    grey = binary.at(0);

    for(int i = 0; i < (binary.length()-1); i++){

        grey = grey + check_val(binary.at(i), binary.at(i + 1));

    }

    cout << "Grey Code is " << grey << endl;
}