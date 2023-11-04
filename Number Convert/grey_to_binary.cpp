using namespace std;

void grey_to_binary(){

    string grey;
    cout << "Enter a Grey Code: ";
    cin >> grey;

    string binary;
    binary = grey.at(0);

    for(int i = 0; i <(grey.length() - 1); i++){
        
        binary += check_val(binary.at(i), grey.at(i + 1));
    }

   cout << "Binary is " << binary << endl;
}