#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int i;
        if(n == 1){
            cout << "no" << endl;
        }
        
        for(i=2; i<n; i++){
            if(n%i == 0){
                cout << "no" << endl;
                break;
            }
        }
        if(a == i){
            cout << "yes" << endl;
        }
    }
    return 0;
}
