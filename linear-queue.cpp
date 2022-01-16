#include<iostream>
using namespace std;
class QUEUE
{
    int A[10],F,R;
public:
    QUEUE()
    {
        F=R=-1;
    }
    void pUSH(int N)
    {
        if(R==9)
            cout<<"Queue Full";
        else
        {
            R++;
            A[R]=N;
            if(F==-1)
                F=0;
        }

    }
    void pOP()
    {
        if(F==-1)
            cout<<"Queue is empty"<<endl;
        else
        {
            cout<<"Rename :   "<<A[F]<<endl;
            F++;

        }
       if(F>R)
                F=R=-1;
            cout<<"QUEUE EMPTY"<<endl;
    }
    void display()
    {
        for(int i=F;i<=R;++i)
            cout<<A[i]<<" "<<endl;
    }

};
int main()
{
    QUEUE Q;
    int A[10],n,ch;
    do{
        cout<<"1.PUSH"<<endl<<"2.POP"<<endl<<"3.DISPLAY"<<endl;
        cin>>ch;
        if(ch==1)
        {
            cout<<"Enter number to be inserted"<<endl;
            cin>>n;
            Q.pUSH(n);
        }
        else if(ch==2)
        {
            Q.pOP();

        }
        else if(ch==3)
        {
            Q.display();
        }
    }
    while(ch>=1&&ch<=3);
    return 0;
}
