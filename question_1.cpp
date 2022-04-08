#include<iostream>
using namespace std;
int main()
{
    int arr[10],size,num,flag=0;
    cout<<"enter size of array";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter number to be searched";
    cin>>num;
    for(int i=0;i<size-1;i++)
    {
     if(arr[i]==num)
     {
         flag=1;
         break;
     }
    }
    if(flag==0)


        cout<<"element is not found in an array";

    else

        cout<<"element found";

    return 0;
}
