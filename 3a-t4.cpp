#include<iostream> 
using namespace std; 

int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k; //user enters how many times loop will  continue
do { if (k == 0) 
{
    break;
  }
cout << "Enter integer nr. " << i << ": "; //user prompt
cin >> number;
sum_k += number; 
i++;// increase the index variable 
} while (i <= k);//loop will continue until i !> k
 
cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
}

