/*Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.
 
 Class ID    Ship Class
 B or b    BattleShip
 C or c    Cruiser
 D or d    Destroyer
 F or f    Frigate
 Input
 The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.

 Output
 For each test case, display the Ship Class depending on ID, in a new line.

 Constraints
 1 ≤ T ≤ 1000
 Example
 Input

 3
 B
 c
 D

 Output
 BattleShip
 Cruiser
 Destroyer*/

#include <iostream>
using namespace std;

int main (){
    int t;
    cin >> t;
    
    while (t--){
        char ch;
        cin >> ch;
        
        if (ch == 'B' || ch == 'b'){
            cout << "BattleShip" << endl;
        }
        else if (ch == 'C' || ch == 'c'){
            cout << "Cruiser" << endl;
        }
        else if (ch == 'D' || ch == 'd'){
            cout << "Destroyer" << endl;
        }
        else if (ch == 'F' || ch == 'f'){
            cout << "Frigate" << endl;
        }
    }
    
    return 0;
}
