#include <iostream>
using namespace std;

void reversearr(int arr[],int sz)
{
    int start=0;
    int end = sz-1;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

        
    }

    
}
    
int main(){

int arr[] = {2,4,6,5,6,7};
int sz = 6;
reversearr(arr,sz);


for(int i =0;i<sz;i++)
{
   cout<<arr[i]<<" "; 
}
cout<<endl;

return 0;
    
}
