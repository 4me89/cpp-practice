#include <iostream>
using namespace std;

int main() {

    string topics[] = {"Sports", "Politics", "Business", "Technology", "Art"};
    int choices;

    cin >> choices;
    if(choices == 0){
        cout << topics[0] << endl;
    }else if(choices == 1){
        cout << topics[1] << endl;
    }else if(choices == 2){
        cout << topics[2] << endl; 
    }else if(choices == 3){
        cout << topics[3] << endl;
    }else if(choices == 4){
        cout << topics[4] << endl;
    }else{
        cout << "Invalid selection. Please choose a number between 0 and 4." << endl;
    }
    return 0;
}