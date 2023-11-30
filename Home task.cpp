#include <iostream>
using namespace std;

//Task 01
//int main(){
// int x,v,temp;
// int c;
// cout<<" Enter the first number: ";
// cin>>x;
// cout<<" Enter the second number: ";
// cin>>v;
// if(v>x){
// temp=v;
// v=x;
// x=temp;
// }
// for(int i=1; i<=v ; i++){
// if(x%i==0 && v%i==0){
// c=i;
// }
// } 
// int b= (x*v)/c;
// cout<<"hcf is: "<<c<<endl;
// cout<<"lcm is: "<<b<<endl;
// return 0;
// }
 
 //Task 02:
// int main() {
// int a , d , n ;
// cout<<" Enter the first term of the sequence:";
// cin>>a;
// cout<<" Enter the common difference of the sequence:";
// cin>>d;
// cout<<" Enter the number of terms of the sequence:";
// cin>>n;
// int sum=0;
// for(int i=0; i<n; i++) {
// int t ;
// t= a+i*d;
// sum+= t;
// }
// cout<< " The sum of the arithmetic series is :" <<sum<<endl;
// return 0;
//}

//Task 03:
//int main(){
// int r , c, s;
// for(r= 1; r<= 5 ; r++) {
// for (s = 1; s <= 5 - r; s++) {
// cout << " ";
// }
// for (c = 1; c <= r * 2 - 1; c++) {
// cout << "*";
// }
// cout<<endl;
// }
// for(r=4; r>=1 ; r--){
// for(s=1 ; s<=5-r ; s++) {
// cout <<" ";
// }
// for(c=1 ; c<=2*r-1 ; c++){
// cout<< "*";
// }
// cout<<endl;
// }
// return 0;
//}


//Task 04:
//int main() {
// int x;
// cout << "Enter a decimal number: ";
// cin >> x;
// int c[32]; // Assuming 32-bit binary representation
// if (x == 0) {
// cout << "Binary equivalent: 0" << endl;
// return 0;
// }
// int i = 0;
// while (x > 0) {
// c[i] = x % 2;
//x /= 2;
// i++;
// }
// cout << "Binary equivalent: ";
// for (int j = i - 1; j >= 0; j--) {
// cout << c [j];
// }
// cout << endl;
// return 0;}


