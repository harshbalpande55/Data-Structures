#include <iostream>

using namespace std;

int main()
{
    char a[]="finding";
    char h[]={};
    int i=0;

    while(a[i]!= '\0')
    {
        i++;
    }

    int x=1;
    x = x<< (a[i]-97);
    if(x && h >0){
        cout<<"duplicate";
    }
    else{
     (x||h);

    }

    // anagram logic below

    char p[]="medical";

    char q[]="decimal";

    char h1[26]={0};
    int j,t=0;
    while(p[j]!= '\0')
    {
      h1[p[j]-97]+=1;
    }
    while(q[t]!= '\0')
    {
      h1[q[t]-97]-=1;
      if (h1[q[t]-97]<0){
        cout<<"not anagram";
        break;
      }
    }
    if (q[t]=='\0'){
        cout<<"anagram";
    }

    return 0;
}
