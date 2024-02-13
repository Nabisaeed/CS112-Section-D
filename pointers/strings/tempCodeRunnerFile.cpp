// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    char name[12]={'H', 'e', 'l','l', 'o', '\0'};

    char * ptr;
    ptr= &name[0];

  while(*ptr!='\0'){

    cout<<ptr;

  ptr++;

  }

  cout<<endl;

    // cin.getline(name, sizeof(name));

    // for(int i =0; i<sizeof(name); i++){

    //     cout<<name[i];
    // }

    // cout<<endl;
    
         return 0;
    
}