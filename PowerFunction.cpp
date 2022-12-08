#include<iostream>
using namespace std;

long long int Factorial(int a,int b){
 if(b==0){
    return 1;
 }
  int temp=Factorial(a,b/2);
  if(b%2==1){
    return temp*temp*a;
  }
  return temp*temp;

}

int main(){
    long long int value;
    cin>>value;
    long long int power;
    cin>>power;

  long long   int ans=Factorial(value,power);
    cout<<ans;
    return 0;
}