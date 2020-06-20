#include <iostream>

using namespace std;

int main()
{
    char *s = "welcome";
    // * because enclosed in double i.e " " .
    int i = 0;
    while( s[i] != '\0')
    {
        i++;
    }

    cout<<"length of string s = "<<i ;
    return 0;
}
