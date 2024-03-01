// Q1. Find the output for this code. Let input:- 2 3 6
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter first number\n";
    cin >> x; // user will give ‘x’ a value.
    int y, m;
    cout << "Enter second number and value for taking modulus\n";
    cin >> y >> m; // user will give ‘y’ a value.
    int Z = (x * y) % m;
    cout << "Output is: " << Z;
}
// Ans :The output of the given code is 0.

// Q2. Find the output for this code. Let input:- 3 2
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter first number\n";
    cin >> x; // user will give 'x' a value.
    int y;
    cout << "Enter second number\n";
    cin >> y; // user will give 'y' a value.
    cout << (x != y) << " " << (x >= y);
}
// Ans: The output of the given code "1 1"

// Q3. Find the output for this code. Let input:- 2 3
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    x += y;
    x -= y;
    x %= y;
    cout << x;
}
// Ans: 0

// Q4. WAP for finding the volume of the cylinder by taking radius and height as input.
#include <bits/stdc++.h>
 using namespace std;
 int main() {
 int r,h;
 cout<<"Enter the radius and height  of the cylinser<<end;
cin>>r>>h;
 int pi=3.14;
 int volume=pi*r*r*h;
 cout<<volume;
 return 0;
 }
 // Q5. WAP to find the difference between ASCII of two characters ,take them as input .
  #include <bits/stdc++.h>
 using namespace std;
 int main() {
    char a,b;
    cout<<"Enter two characters :"<<endl;
    cin>>a>>b;
    cout<<b-a<<endl;
 return 0;
 }

 // Q6. Find the output of the below code
  #include <iostream>
 using namespace std;
 int main()
 {
 int i =  ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
 cout<<i;
 }
 // Ans: 49