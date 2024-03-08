#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;

    for (n > 0; n--;){
        int input;
        cin >> input;
        s.insert(input);
    }

    cout << s.size() << endl;
}