#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cout<<"enter a number: ";
cin>>a;
bool con=true;
for (int i =2;i*i<=a;i++){
    if (a%i==0)con=false;
}
if (con)cout<<"the number is prime number\n";
else cout<<"the numaber is not prime nubmer\n";

    return 0;
}