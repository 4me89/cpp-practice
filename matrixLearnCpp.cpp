#include <iostream>
using namespace std;

int main() {
    
     
    
    int  matrix[6][6] = {
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
    };
  for(int rows = 0;rows <6;rows++){
    for(int clows = 0;clows<6;clows++){
        matrix[rows][clows]= 1;
    };
  }
    for(int rows = 0;rows <6;rows++){
        for(int clows = 0; clows<6;clows++){
            cout<<matrix[rows][clows];
        }
        cout << endl;
    }
  }
