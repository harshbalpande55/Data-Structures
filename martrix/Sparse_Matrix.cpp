#include <iostream>
using namespace std;

class element{
public:
    int i;
    int j;
    int x;

};

class sparse{
private:
    int m;
    int n;
    int num;
    element *e;
public:
    sparse(int m,int n,int num){           // sparse is a constructor we used same m,n,num so
        this->m=m;                         // we have this pointer.
        this->n=n;
        this->num=num;
        e = new element[this->num];

    }
    ~sparse()
    {
        delete [] e;
    }
    void read(){
        cout<<"enter non-zero elements";
        for(int i=0;i<num;i++){
            cin>>e[i].i>>e[i].j>>e[i].x;
            }
    }
    void display(){
        int k;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(e[k].i == i && e[k].j == j){
                    cout<<e[k++].x<<" ";
                }
                else{
                    cout<<"0 ";}
            }
            cout<<endl;
            }
        }
};



int main(){
    sparse s1(5,5,5);
    s1.read();
    s1.display();
    return 0 ;
}