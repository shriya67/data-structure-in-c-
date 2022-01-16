#include<iostream>
using namespace std;
class CQUEUE
{
    int A[10],F,R;
public:
    CQUEUE()
    {
        F=R=-1;
    }
    void push(int N)
    {
        if((F==0&&R==9)||(F=R+1))
            cout<<"Queue Full";
        else{
            R=(R+1)%10;
            A[R]=N;
            if(F==-1)
                F=0;
        }
    }
    void pop()
    {
        if(F==-1)
            cout<<"Queue Empty";
        else
        {
            cout<<"Rename :"<<A[F];
            F=(F+1)%10;
            if(F>R)
                F=R=-1;
        }

    }
    void display()
    {
        if (F == -1) {
      cout<<"Queue is empty"<<endl;

   }
   cout<<"Queue elements are :\n";
   if (F <= R) {
      while (F<= R){
         cout<<A[F]<<" ";
         F++;
      }
   } else {
      while (F<= n - 1) {
         cout<<A[F]<<" ";
         F++;
      }
      F = 0;
      while (F <= R) {
         cout<<A[F]<<" ";
         F++;
      }
   }
    }

};
int main()
{
    CQUEUE C;
    int A[10],n,ch;
    do{
        cout<<"1.PUSH"<<endl<<"2.POP"<<endl<<"3.PUSH"<<endl;
        cin>>ch;
        if(ch==1){
            cout<<"Enter number to be inserted in CQueue";
            cin>>n;
            C.push(N);

        }
        else if(ch==2){
            C.pop();
        }
        else if(ch==3)
        {
            C.display();
        }
    }
    while(ch>=1 && ch<=3);
}
