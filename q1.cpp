#include <iostream>
#include <cmath>
using namespace std;

//------------------------3--------------------------------
double factoriel(int x) {
    double mult=1;
    for (int i=1;i<=x;i++)
    mult *= i;
    return mult;
}

void KMM(int n3,int m3) {
    bool check_zero_KMM = true;
    cout<<"K M M: "<<endl;
    if (n3==0 || m3==0) {cout<<0<<endl;
        check_zero_KMM = false;}
        if (check_zero_KMM) {for (int i=1;i<=n3*m3;i++) {
            if (i%n3==0 && i%m3==0) {
                cout<<i<<endl;
                break;
            }
        } }
    }
    
    void BMM(int N3,int M3) {
        bool check_zero_BMM = true;
        cout<<"B M M: "<<endl;
        if (N3==0 || M3==0) {
          cout<<0;
          check_zero_BMM = false;
        }
        if (check_zero_BMM) {for (int i=min(N3,M3);i>=1;i--) {
            if (N3%i==0 && M3%i==0) {
                cout<<i<<endl;
                break;
            }
        } }
        
    }
    
    void combination(int N,int K) {
        int answer = factoriel(N) / (factoriel(N-K) * factoriel(K));
        cout<<answer;
    }
    //-------------------------3----------------------------

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

//------------------------------2----------------------------
//------------------------------1----------------------------

void simple_calculator(double arr1[],int n1) {

    if (n1!=0) {
        cout<<"Start calculating your numbers: "<<endl;
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
cout<<answer<<endl;}
else {cout<<"Invalid!"<<endl;
}
}
//------------------------------1--------------------------

int main() {
    //---------------------------1---------------------------------------------
    cout<<"Enter the amount of numbers you want to calculate: "<<endl;
int n1;   cin>>n1;
double arr1[n1];
simple_calculator(arr1,n1);
//-------------------------------1-------------------------------
//----------------------------2------------------------------
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
//--------------------------2-------------------------------------

//--------------------------3-------------------------------------

  int n3,m3;
  cout<<"Enter two numbers to find their KMM: "<<endl;
  cin>>n3>>m3;
  KMM(n3,m3);

  int N3,M3;
  cout<<"Enter two numbers to find their BMM: "<<endl;
  cin>>N3>>M3;
  BMM(N3,M3);


int N,K;
cout<<"Enter two numbers to find their combination: "<<"{ example:input(1) = 3 , input(2) = 8 --> C(8,3) }"<<endl;
do {
  cin>>K>>N;
  if (K>N) {
    cout<<"Invalid!"<<endl;
  }
} while (K>N);
combination(N,K);
//------------------------------3-----------------------------
return 0;
}