#include <iostream>
#include <vector>

using namespace std;

int main(){
    string temp;
    vector<string> nine;
    vector<string> ten;
    vector<string> eleven;
    while (getline(cin, temp))
    {
        string klass = temp.substr(0, temp.find(' '));
        if (klass == "9"){
            nine.push_back(temp);
        } else if (klass == "10"){
            ten.push_back(temp);
        } else {
            eleven.push_back(temp);
        }
    }

    for (string i : nine){
        cout << i << endl;
    }
    for (string i : ten){
        cout << i << endl;
    }
    for (string i : eleven){
        cout << i << endl;
    }
}