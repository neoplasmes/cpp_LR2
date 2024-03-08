#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(){
    string line;
    deque<string> apps;
    vector<string> result;

    getline(cin, line);
    int n = stoi(line);

    auto countChar = [](string s, char key){
        int res = 0;
        for (char i : s){
            res += (i == key) ? 1 : 0;
        }
        return res;
    };
    
    for(n > 0; n--;){
        getline(cin, line);
        if(line.find("Alt") == string::npos){
            string temp = line.substr(line.find(" ") + 1);
            apps.push_front(temp);
            result.push_back(temp);
        } else {
            int index = (countChar(line, '+')) % apps.size();
            result.push_back(apps[index]);

            apps.push_front(apps[index]);
            apps.erase(apps.begin() + index + 1);
        }
    }

    for (string i : result){
        cout << i << endl;
    }

}