//finding largest number in given list(array)

#include<iostream>
using namespace std;
#define MAX 50
int main()
{
  int arr[MAX];
  int n;
cout<< " enter the numbers";
cin>>n;
cout<<"enter the lists";
for(int i=0 ; i<n; i++)
{
  cin>>arr[i];
}
  int biggest = arr[0];
  for (int i = 0 ;i<n; i++)
  {


    if(arr[i] >biggest)
    {


        biggest = arr[i];

    }
}
cout<< " the biggest is:"<< biggest;
return 0;

}
