#include <iostream>
using namespace std;;

int simple_calculator(int arr1[],int n1) {
    if (n1!=0) {
    cin>>arr1[0];
int answer = arr1[0];
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
return answer;}
else {cout<<"Invalid!"<<" ";
return 0;}
}


int main() {
int n1;   cin>>n1;
int arr1[n1];
cout<<simple_calculator(arr1,n1);


return 0;
}