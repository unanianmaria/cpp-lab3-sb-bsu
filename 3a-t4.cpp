#include<iostream>
#include<limits>
using namespace std;
int main()
{
int k, i=1, sum_k=0 , n;
cout<<"Enter the amount of integers to sum ";
cin>>k;
while (i <= k) {
 cout<<"Enter an integer number\n"; //user prompt
cin>>n;
while(1)
{
if(cin.fail()) 
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n'); // ignores the incorrect input
cout<<"You have entered wrong input"<<endl;  // tells us to enter int number again
cin>>n; // reads the correct input
}
if(!cin.fail())
break;
} 
sum_k += n; // add inputted integer to sum_k 
i++; // increase the index variable 
}
cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
}


