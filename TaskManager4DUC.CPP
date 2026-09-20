#include <iostream>
using namespace std;

int main(){

    string Task_Manager[] = {"WifyManager", "FolderExplorer", "Open File ", "Close File", "Added a New File"};
    int taskChoice;
    cout << "select a task to view: ";
    cin >> taskChoice;
    if (taskChoice == 0){
        cout << Task_Manager[0] << endl;
    }else if ( taskChoice == 1){
        cout << Task_Manager[1] << endl;
    }else if ( taskChoice == 2){
        cout << Task_Manager[2] << endl;
    }else if (taskChoice == 3){
        cout << Task_Manager[3] << endl;
    }else if (taskChoice == 4){
        cout << Task_Manager[4] << endl;
        return 0;
    }
}