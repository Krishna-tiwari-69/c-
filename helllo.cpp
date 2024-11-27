
#include <iostream>
using namespace std;
int main() {
   char o;
   cout<<"a.tea b.coffe";
   cin>>o;
    switch(o){
        case 'a':cout<<"a. choclate b.butterscotch" ;
        cin>>o;
        switch(o){
            case 'a':cout<<"choclate tea";
            break;
            case 'b':cout<<"butter scotch tea";
        }
        break;
         case 'b':cout<<"a.expresso  b.motcha" ;
        cin>>o;
        switch(o){
            case 'a':cout<<"expresso coffe";
            break;
            case 'b':cout<<"motcha cofee";
        }
       default:cout<<"ii";
    }
    
}