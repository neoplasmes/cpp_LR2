#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> nums;
    string expr;
    getline(cin,expr);

    for(int i = 0; i < expr.length(); i++){
        if(expr[i] != ' ' && (expr[i] >= '0' && expr[i] <= '9')){
            int n = 0;
            while (expr[i] != ' '){
                n += (expr[i++] - '0');
            }
            nums.push(n);
        } else if (expr[i] != ' ' && (expr[i] =='+' || expr[i] == '-' || expr[i] == '*')){
            int n1 = nums.top();
            nums.pop();
            int n2 = nums.top();
            nums.pop();
            int result;
            switch(expr[i]){
                case '+':
                    result = n1 + n2;
                    break;
                case '-':
                    result = n2 - n1;
                    break;
                case '*':
                    result = n1 * n2;
                    break;
            
            }
            nums.push(result);
        }
    }
    cout << nums.top() << endl;
}