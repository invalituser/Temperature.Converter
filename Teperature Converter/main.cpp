#include<iostream>
#include <limits>
using namespace std;
int main(){
    cout << "1.Celsius to Farenheit\n2.Farenheit to Celsius\n";
    int a;  cout << "enter: ";  //cout << endl;
    while(true){
        cin >> a;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "enter proper operation: ";
        }
        else if (a == 1 || a == 2){
            break;
        }   
        else{
            cout << "enter proper operation: ";
        }
        
    }
    double b,res;
    switch (a){
        case 1:
            
            while(true){
                cout << "Enter value in Celsius: ";
                cin>>b;
                if(cin.fail()){
                    cin.clear(); //clear the error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore invalid error
                }
                else {
                    break;
                }
            }   
            

            res = (b*9/5)+32;
            cout << endl << "in Farenheit it will be: " << res << endl;
        case 2:
            
            while(true){
                cout << "Enter value in Celsius: ";
                cin>>b;
                if(cin.fail()){
                    cin.clear(); //clear the error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore invalid error
                }
                else {
                    break;
                }
            }   
            res = (b-32)*5/9;
            cout << endl << "in Celsius it will be: " << res << endl;
    }
    return 0;
}