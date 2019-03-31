//please run in terminal
#include <iostream>
using namespace std;
void wait(int &x)
{
    if(x>0)
    x--;
}
void Signal(int &x)
{
    x++;
}
int main()
{
    int a[5];
    int empty=5;
    int full=0;
    int s=1;
    while(1)
    {
        cout<<"__________________________________________________"<<endl;
      cout<<" Empty "<<empty<<" Full "<<full<<" s "<<s<<endl;
      cout<<"Enter your choice 1.produce 2.consume "<<endl;
      int x;
      cin>>x;
      if(x==1)
      {
        if(empty!=0&&s==1)
        {
            cout<<"enter data"<<endl;
            wait(empty);
            wait(s);
            cin>>a[full];
            Signal(s);
            Signal(full);
        }
        else cout<<"Buffer is full "<<endl;
      }
      else if(x==2)
      {
          if(full>0&&s==1)
          {
              wait(full);
              wait(s);
              cout<<"Data is "<<a[full]<<endl;
              Signal(s);
              Signal(empty);
          }
          else cout<<"Buffer is empty"<<endl;
      }
      else break;
    }
    return 0;
}
