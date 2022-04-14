#include<iostream>
using namespace std;
int Binar_search(int arr[],int low,int high,int key)
{
    static int count=0;
    count++;
    int mid=(high+low)/2;
    if(low>high)
    return -1
    if(arr[mid]==key)
    {
        printf("total comparison =",count);
        return mid;
    }
    if(arr[mid]>key)
    {

        Binary_search(arr,0,mid-1,key);
    }
    if(arr[mid]<key)
    {
        Binary_search(arr,mid+1,high,key);
    }
}
void inputarray()
{

}
int main()
{


}
