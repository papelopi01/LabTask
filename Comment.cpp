#include<iostream>
using namespace std;
int main(){
    char line[100];
    cout<<"Write something: ";
    cin.getline(line,100);
    if(line[0]=='/'&& line[1]=='/'){
            cout<<"Single line comment";
    }
    else if(line[0]=='/'&& line[1]=='*'&& line[2]!='\0')
    {
        cout<<"Multi line comment";

    }
    else{
            cout<<"No comment found";

    }

}
