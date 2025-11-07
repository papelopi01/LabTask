#include <iostream>
using namespace std;
int main()
{
    char name[50];
    cout<<"Enter a name: ";
    cin>>name;

    if(!((name[0]>= 'A' && name[0]<= 'Z')||
            (name[0]>= 'a' && name[0]<= 'z')||
            (name[0]== '_'))){
        cout<<"Not a valid name."<<endl;
        return 0;
    }

    for(int i =1; name[i]!='\0'; i++)
    {
        if(!((name[i]>= 'A' && name[i]<= 'Z')||
                (name[i]>= 'a' && name[i]<= 'z')||
                (name[i]>= '0' && name[i]<= '9')||
                (name[i]== '_')))
        {

            cout<<"Not a valid name."<<endl;
            return 0;
        }

    }
    cout<<"Valid name "<<endl;
    return 0;


}
