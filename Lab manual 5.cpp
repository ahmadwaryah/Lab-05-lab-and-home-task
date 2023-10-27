// Lab Tasks
// Task 1:
// #include <iostream>
// using namespace std;
// int main ()
// {
//     int x=1;
//     do
//     {
//         cout<<"Enter Number:";
//         cin>>x;
//     }
//     while(x>0);
    
// }

//Task 2:
// #include<iostream>
// using namespace std;
// int main ()
// {
//     char p;
//     int x;
//     float c,v,b,n,m,k,l;
//     do
//     {
//     cout<<"Enter Numbers: ";
//     cin>>v;
//     cin>>b;
//  cout<<"For addition press 1\n For subtraction press 2\nFor multiplication press 3\nFor Division press 4\n";
//  cin>>x;
//      switch (x)
//      {
//      case 1:
//      c=b+v;
//      cout<<""<<c<<endl;
//      break;
//      case 2:
//      n=b-v;
//      cout<<""<<n<<endl;
//      break;
//      case 3:
//      m=b*v;
//      cout<<""<<m<<endl;
//      break;
//      case 4:
//      k=b/v;
//      cout<<""<<k<<endl;
//      }
//  cout<<"Do You Want to Use Again (Y/N)\n";
//  cin>>p;
//     }
//  while(p=='y'|| p=='Y');
// }

// Task 3:
// #include <iostream>
// using namespace std;
// int main ()
// {
//     int x,i,v,b;
//      x=0;
//         i=2;
//     do
//     {
//         x=x+i;
//         i=i+ 2;
//     }
//     while(i<=100);
//     cout<<"The sum of evem numbers between 2 and 100 is "<<x<<endl;
//     v=0;
//     b=1;
//       do
//     {
//         v=v+b;
//         b=b+ 2;
//     }
//     while(b<=100);
//     cout<<"The sum of odd numbers between 1 and 100 is "<<v<<endl;
// }

// Task 4: part(a) 
// #include <iostream>
// using namespace std;
// int main() {
//     int x,c,v,b;
//     float p,o;
// 	v= 0;
// 	o = 1;

// 	while (v <= 20) {
// 		o = o * 2;
// 		p=o/2;
// 		cout << "2 raised to power of " << v << " = " << p << endl;
// 		v++;
// 	}
// }
//Task 4 Part (b)
// #include <iostream>
// using namespace std;
// int main ()
// {
//     int x,i,v,b;
// v=0;
// cout<<"Write two numbers? ";
// cin>>x;
// cin>>i;
//     b=x;
//     if(x%2!=0)
//     {
//       do
//     {
//         v=v+b;
//         b=b+ 2;
//     }
//     while(b<=i);
//     cout<<"The sum of odd numbers between "<<x <<" and "<<i<< " is "<<v<<endl;
//     }
    
//     else if(x%2==0)
//     {
//         cout<<"Please write odd numbers. ";
//     }
// }