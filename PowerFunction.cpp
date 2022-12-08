#include<iostream>
using namespace std;

/*

Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 
*/

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
