#include <iostream>
using namespace std;;

void simple_calculator(double arr1[],int n1) {
    if (n1!=0) {
    cin>>arr1[0];
double answer = arr1[0];
char func;

for (int i=1;i<n1;i++) {
    cin>>func;
    cin>>arr1[i];
    
 switch (func) {
    case '+': answer += arr1[i];
    break;
    case '-': answer -= arr1[i];
    break;
    case '*': answer *= arr1[i];
    break;
    case '/': answer /= arr1[i];
    break;
 }
}
cout<<answer;}
else {cout<<"Invalid!"<<" ";
}
}


int main() {
int n1;   cin>>n1;
double arr1[n1];
simple_calculator(arr1,n1);


return 0;
}