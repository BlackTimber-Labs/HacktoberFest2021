#include <iostream>
using namespace std;

// Guessing the number game 

int main()
{
    // this program finds that the user selects from 1 to 8
    char answer;
    cout<<"pick a number from 1 to 8." << endl;
    cout<<"its is less than 5 ? (y|n):";
    cin>>answer;
    if(answer == 'y')
    {
        cout<<"is it less than 3? (y|n):";
        cin>>answer;
        if(answer == 'y')
        {
            cout<<"is it less than 2 ? (y|n):";
            cin>>answer;
            if(answer == 'y')
                cout<<"Your number is 1 "<<endl;
                else cout<< "your number is 2"<<endl;
        }
        else
        {
            cout<<"is it less than 4 ? (y|n):";
            cin>>answer;
            if(answer == 'y')
                cout<<"Your number is 3 "<<endl;
                else cout<< "your number is 4"<<endl;
        }
    }

    else
    {
        cout<<"is it less than 7 ? (y|n):";
            cin>>answer;
            if(answer == 'y')
               {
                cout<<"is it less than 6 ? (y|n): "<<endl;
                cin>>answer;
                if(answer == 'y')
                 cout<<"Your number is 5 "<<endl;
                else cout<< "your number is 6"<<endl;
               }
    else
    {
        cout<<"is it less than 8 ? (y|n):";
            cin>>answer;
                if(answer == 'y')
                 cout<<"Your number is 7 "<<endl;
                else cout<< "your number is 8"<<endl;
        }
    }
}
