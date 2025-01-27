#include<iostream>

using namespace std;

int secondlargest(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
        
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return arr[n-2];
}


int main(){
    int num,secondlr;
    cout<<"Enter the number of array elements :"<<endl;
    cin>>num;
    int arr[num];
    for (int i=0;i<num;i++){
        cout<<"Enter the "<<i+1 <<" value :";
        cin>>arr[i];
    }
    

    secondlr=secondlargest( arr ,num);
    cout<<"Second largest array number is :"<<secondlr;

    
}