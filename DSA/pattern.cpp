#include <iostream>
using namespace std;

int main(){
    // cout<<"*****"<<endl;
    // cout<<" *** "<<endl;
    // cout<<"  *  "<<endl;
    int p=1;
    int b=13;
    for(int j=1;j<6;j++){
        for(int i=0;i<p;i++){
            cout<<" ";
        }
        p++;
        b=b-2;
        for(int k=1;k<=b-2;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
//4 space * 4 space
//pppa
//ppa
//pa
//a
