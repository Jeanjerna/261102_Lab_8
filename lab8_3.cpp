#include <iostream>
#include <string>
using namespace std;


int main()
{
    long double age , height , bounty ;
    string character ;
    
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100) character = "Chopper";
        else if(height <180) character = "Usopp";
        else
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 1.1e9) character = "Zoro";
            else character = "Sanji";
        }
    }
    else
    {
        if(age <= 60)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 500e6) character = "Jinbe";
            else character = "Franky";
        }
        else character = "Brook";
        
    }
    
    cout << "Your character = " << character;
    
    return 0;
}