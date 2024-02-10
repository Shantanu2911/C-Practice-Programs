//Floyds triangle
#include <iostream>
using namespace std;

int main(){
    int n;
    int count=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<endl;
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
    }
    
    return 0;

}

