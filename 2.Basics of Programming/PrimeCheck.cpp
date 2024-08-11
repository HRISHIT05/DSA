#include<iostream>
using namespace std;
 //prime check 
bool checkPrime(int N){
if(N<=1){
  return false;
}
for(int i=2;i<N;i++){
    if(N%i==0)
    return false;
}
return true;
}
 int main(){
    int n ;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" "<<endl;
        }
    }
 return 0;
 }







