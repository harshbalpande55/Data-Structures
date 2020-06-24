#include <iostream>

using namespace std;

void per(char s[],int k)
  {
    char a[10]={0};
    char res[10];
    int i;
    if (s[k]=='\0')
    {
        res[k]='\0';
        cout<< res;
    }
    else
    {
      for(i=0;s[i]='\0';i++)
        {
            if (a[i]==0)
            {
                res[k]=s[i];
                a[i]=1;
                per(s,k+1);
                a[i]=0;
            }
        }

    }

}

int main()
{
    char s[]="ABC";

    per(s,0);
    return 0;
}
