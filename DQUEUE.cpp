#include<iostream>
using namespace std;
class DQUEUE
{
    int A[10],F,R;
   int M=10;
public:
    DQUEUE()
    {
        F=R=-1;
    }
    void IFR()
    {
        if(R==M-1)
            cout<<"DQ Full"<<endl;
        else
        {
            R=R+1;
            cout<<"Enter the number "<<endl;
            cin>>A[R];
            if(F==-1)F=0;
        }
    }
    void IFF()
    {
        if(F==0)
            cout<<"DQ Full";
        else if(F==-1)
        {
            F=R=0;
            cout<<"Enter the number"<<endl;
            cin>>A[F];
        }
        else
        {
           F=F-1;
        cout<<"Enter number"<<endl;
        cin>>A[F];
        }
    }
    void DFF()
    {
      if(F==-1)
      cout<<"DQ empty";
      else
      {
          cout<<"Remove : "<<A[F];
          F++;
      }

    }
    void DFR()
    {
        if(F==-1||R==-1)
            cout<<"DQ Empty";
        else
        {
            cout<<"Remove :"<<A[R];
            R=R-1;
            if(R<F)R=F=-1;
        }

    }
    void display()
    {
        for(int I=F;I<=R;++I)
        {
            cout<<A[I]<<"  ";
        }

    }


};
int main()
{
    int A[10],n,ch;
    DQUEUE D;
    do
    {
        cout<<"1.IFR"<<endl<<"2.IFF"<<endl<<"3.DFF"<<endl<<"4.DFR"<<endl<<"5.DISPLAY"<<endl;
        cin>>ch;
        if(ch==1||ch==2)
        {
            cout<<"Enter the number to be inserted"<<endl;
            cin>>n;
            if(ch==1){
            D.IFR();
            }
            else if(ch==2)
            {
                D.IFF();
            }
        }


    else if(ch==3)
        D.DFR();
    else if(ch==4)
        D.DFF();
    else if(ch==5)
    {
        D.display();
    }

    }
    while(ch>=1&&ch<=5);
}
