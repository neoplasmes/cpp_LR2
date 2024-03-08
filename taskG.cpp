#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <set>

using namespace std;

/*bool cstringEquality(char* line1, char* line2){
    size_t len1 = strlen(line1);
    size_t len2 = strlen(line2);
    if (len1 != len2) return false;
    for (int i = 0; i < len1; i++){
        //cout << line1[i] << line2[i] << endl;
        if (line1[i] != line2[i]) return false;
    }
    return true;
}

class Data{
    private:
        size_t mallocfor = 16;
        size_t iterator = 0;
        const size_t maxLineLenght = 10;
        
        void increaseSize(size_t new_size){

        }

    public:
        char** array;

        Data(){
            array = (char**)malloc(sizeof(char*) * mallocfor);
            /*for (int i = 0; i < mallocfor; i++){
                array[i] = (char*)malloc(sizeof(char) * maxLineLenght);
            }*/
        /*}

        void push_back(char line[]){
            size_t new_size = iterator + 1;
            if (new_size > mallocfor){
                mallocfor *= 2;
                array = (char**)realloc(array, mallocfor * sizeof(char**));
            }
            
            size_t inputSize = strlen(line);
            array[iterator] = (char*)malloc(inputSize * sizeof(char));

            for (int i = 0; i < inputSize; i++){
                array[iterator][i] = line[i];
            }
            iterator++;
        }

        void erase(size_t index){
            char** temp = (char**)malloc(sizeof(char*) * mallocfor);
            for (int i = 0; i < index; i++){
                int lineLen = strlen(array[i]);
                temp[i] = (char*)malloc(lineLen * sizeof(char));
                for (int j = 0; j < lineLen; j++){
                    temp[i][j] = array[i][j];
                }
            }
            for (int i = index + 1; i <= iterator-1; i++){
                int lineLen = strlen(array[i]);
                temp[i - 1] = (char*)malloc(lineLen * sizeof(char));
                for (int j = 0; j < lineLen; j++){
                    temp[i - 1][j] = array[i][j];
                }
            }
            iterator--;
            free(*array);
            array = temp;

        }

        bool exist(char line[]){
            for (int i = 0; i < iterator; i++){
                if (cstringEquality(line, array[i])) return true;
            }
            return false;
        }

        char*& operator[](size_t index){
            return array[index];
        }

        ~Data(){
            free(*array);
        }

};*/



/*class myString{
    char* str;
    size_t size = 0;

    myString(){
        //str = (char*)malloc(sizeof(char) * mallocfor);
    }

    void operator=(string line){
        size = line. 
        str = (char*)m
    }
};*/


int main(){
    set<string> data;
    string temp;

    while(true){
        getline(cin, temp);
        char op = temp[0];
        if(op == '#') break;
        temp = temp.substr(2);
        switch(op){
            case '+':
                data.insert(temp);
                break;
            case '-':
                data.erase(temp);
                break;
            case '?':
                cout << ((data.count(temp) == 0) ? "NO" : "YES") << endl;
                break;
        }
    }
}