#include <iostream>
using namespace std;
int main(){
    char input[50];
    cin>> input;

    int count = 1;

    for(int i = 0;input[i] !='\0';i++){
        if(input[i] == '+' ||input[i] == '-' ||input[i] == '*' ||input[i] == '/' ||input[i] == '=' )
        {
            cout<<"Operator"<<count<<":"<<input[i]<<endl;
            count++;
        }

    }
    return 0;

}
