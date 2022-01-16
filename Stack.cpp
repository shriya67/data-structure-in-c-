/* LAST IN FIRTST OUT */
#include<iostream>
using namespace std;
class STACK
{
    int A[20],top,cap;
public:
    STACK(int s)
    {
        cap=s;
        top=-1;
    }
    void PUSH(int n)
    {


        if(top==cap-1)
        {
            cout<<"Stack overflow"<<endl;

        }
        else
        {
            top++;
            A[top]=n;
        }
    }
    void POP()
    {

    if(top==-1)
        cout<<"Stack underflow"<<endl;
    else{

        cout<<"Rename :"<<A[top];
        --top;
    }
    }
    void display()
    {

    int i;
    for(i=top;i>=0;--i){
        cout<<"\n"<<A[i];
    }
    }

};

int main()
{
    int cap;
    int ch,n;
    cout<<"enter space of stack";
    cin>>cap;
    STACK T(cap);

    do{
        cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Display";
        cin>>ch;


        if(ch==1){
                cout<<"enter no to be insert";
        cin>>n;
            T.PUSH(n);
        }
        else if(ch==2){
            T.POP();

        }
        else if(ch==3){
            T.display();
        }
    }
    while(ch>=1 && ch<=3);
}
