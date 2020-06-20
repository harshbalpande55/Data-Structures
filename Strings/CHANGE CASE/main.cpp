#include <iostream>

using namespace std;

int main()
{
    char s[]="WELCOME";
    int i=0;
    while(s[i] != '\0')
    {
        s[i] = s[i]+ 32;
    }
    cout<<"final ans "<< s[0];
    return 0;
}
