//inverted half pyramid
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<endl;
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        
    }

    return 0;
}



