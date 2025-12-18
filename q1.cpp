#include <iostream>
#include <cmath>
using namespace std;

//-------------------------2----------------------------
void degree1(double a, double b)
{
    if (a == 0)
    {
        cout << "a must not be zero" << endl;
    }
    else
    {
        double x = -b / a;
        cout << "Root: x = " << x << endl;
    }
}


void degree2(double a, double b, double c)
{
    double delta = b * b - 4 * a * c;
    cout << "Delta = " << delta << endl;

    if (delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0)
    {
        double x = -b / (2 * a);
        cout << "x = " << x << endl;
    }
    else
    {
        cout << "No real roots" << endl;
    }
}

//-----------------------------------------------------------

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

    int n2;
    cout << "Enter equation type (1 or 2): ";
    cin >> n2;

    if (n2 == 1)
    {
        double a, b;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;

        degree1(a, b);
    }
    else if (n2 == 2)
    {
        double a, b, c;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;

        degree2(a, b, c);
    }
    else
    {
        cout << "Invalid input" << endl;
    }


return 0;
}