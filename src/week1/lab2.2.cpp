//problem1
// #include <iostream>
// using namespace std;
// int main() {
//     //problem1
//     int a, b, sum;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     sum=a+b;
//     cout<<"Sum: "<<a<<" + "<<b<<" = "<<sum;
//     return 0;
// }

//problem2
// #include <iostream>
// using namespace std;
// int main() {
//     double x, y;
//     cout<<"Enter the variables: ";
//     cin>>x>>y;
//     double t;
//     t = 3*(x*x+3)/(y/4+3);
//     cout<<"t = "<<t<<endl;
//     return 0;
// }

//problem3
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout<<"Is a < b ?"<< (a<b) <<endl;
//     cout<<"Is a > b ?"<< (a>b) <<endl;
//     cout<<"Is a == b ?"<< (a==b) <<endl;
//     return 0;
// }

//problem4
// #include <iostream>
// using namespace std;
// int main() {
//     float v0,v1,t;
//     cout<<"Enter the starting velocity in m/s: ";
//     cin>>v0;
//     cout<<"Enter the ending velocity in m/s: ";
//     cin>>v1;
//     cout<<"Enter the time in seconds: ";
//     cin>>t;
//     float a=(v1-v0)/t;
//     cout<<"Average acceleration is: "<<a<<endl;
//     return 0;
// }

//problem5
// #include <iostream>
// using namespace std;
// int main() {
//     int num, num1 ;
//     cout << "Enter a number: ";
//     cin >> num;
//     num--;
//     num*=7;
//     num-=14;
//     num/=12;
//     num+=3;
//     int r= num % 3;
//     cout<<"Final value of a number: "<<num<<endl;
//     cout<<"The remainder: "<<r<<endl;
//     return 0;
// }

//problem6
// #include <iostream>
// using namespace std;
// int main() {
//     float d,s,r;
//     cout<<"Enter the diameter of the sphere: ";
//     cin>>d;
//     r=d/2;
//     s=4*3.14*r*r;
//     cout<<"The area of the sphere: "<<s<<endl;
//     return 0;
// }

//problem7
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,c,d,sum1,sum2;
//     cout<<"Enter 4 numbers: ";
//     cin>>a>>b>>c>>d;
//     sum1=a+b;
//     sum2=c+d;
//     cout<<"Sum of first pair: "<<sum1<<endl;
//     cout<<"Sum of second pair: "<<sum2<<endl;
//     cout<<"Is sum1 < sum2? "<<(sum1<sum2)<<endl;
//     cout<<"Is sum1 > sum2? "<<(sum1>sum2)<<endl;
//     cout<<"Are the sums equal? "<<(sum1==sum2)<<endl;
//     return 0;
// }