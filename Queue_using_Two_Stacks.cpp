#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> Front,Rear;
    int Q;
    cin >> Q;
    while(Q--)
    {
        int choice, x;
        cin >>choice;
        if(choice==1)
        {
            cin >> x;
            Rear.push(x);
        }    
        else 
        {
           if(Front.empty())
           { 
               while(!Rear.empty())
               {
                   Front.push(Rear.top());
                   Rear.pop();
               }   
            }    
           if(!Front.empty())
           {
               if(choice==2) 
               {
               Front.pop();
               }
               if(choice==3) 
               {
               cout << Front.top() << endl;
               }
           }  
        }   
    }    
    return 0;
}
