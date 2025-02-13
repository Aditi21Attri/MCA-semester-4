#include<iostream>

using namespace std;

int displaylist(){
    int choice;
    cout<<"What pattern you want to print :\n";
    cout<<"1.Right triangle \n2.Left triangle \n3.Full triangle\n4.Odd triangle\n5.Diamond \nEnter your choice :";
    cin>>choice;
    return choice;

}
void left_triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
       }
}
void right_triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<"\n";
       }
}

void full_triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<"\n";
       }
}
void diamond(int n){
    int z=1;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=z;k++){
            cout<<"*";
        }
        z+=2;
        cout<<"\n";
    }
    z-=4;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int j=1;j<=z;j++){
            cout<<"*";
        }
        
        z-=2;
        cout<<"\n";
    }
}
void odd_triangle(int n){
    int z=1;
    for(int i=1;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int k=0;k<z;k++){
            cout<<"*";
        }
        cout<<"\n";
        z+=2;
    }
}

int main(){
    int num,operation;
    cout<<"Enter the number rows :";
    cin>>num;
    operation=displaylist();
    switch (operation)
    {
    case 1:
        left_triangle(num);
        break;
    case 2:
        right_triangle(num);
        break;
    case 3:
        full_triangle(num);
        break;
    case 4:
        odd_triangle(num);
        break;
    case 5:
        diamond(num);
        break;
    default:
        cout<<"Wrong choice entered.";
        break;
    }

    return 0;
}