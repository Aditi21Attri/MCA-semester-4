#include<iostream>

using namespace std;

int displaylist(){
    int choice;
    cout<<"\n--------------------\nWhat operation you want make :\n";
    cout<<"1.Display Array \n2.Find second largest \n3.Insert at begin\n4.Insert at end \n5.Insert at loc\nEnter your choice :";
    cin>>choice;
    return choice;
}

int secondlargest(int arr[],int n){
    int largest=-1,secondlarge=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]>secondlarge && largest>arr[j]){
            secondlarge=arr[j];
        }
    }

    return secondlarge;
}

void insert_begin(int arr[],int &n,int number){
    int newarr[n+1];
    newarr[0]=number;
    for(int i=1;i<=n;i++){
        newarr[i]=arr[i-1];
    }
    for(int i=0;i<=n;i++){
        arr[i]=newarr[i];
    }
    n++;
}
void insert_end(int arr[],int &n,int number){
    arr[n]=number;
    n++;
}
void insert_loc(int arr[],int &n,int number){
    int loc;
    cout<<"\nEnter the index in which you want to add element :";
    cin>>loc;
    if (loc==0){
        insert_begin(arr,n,number);
    }
    
    else{
        
        for(int i=n-1;i>=loc;i--){
            arr[i+1]=arr[i];
            
        }
        arr[loc]=number;
        n++;
      

    }
    

}
void display_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}


int main(){
    int num,choice;
    cout<<"Enter the number of array elements :"<<endl;
    cin>>num;
    int arr[num];
    for (int i=0;i<num;i++){
        cout<<"Enter the "<<i+1 <<" value :";
        cin>>arr[i];
    }
    
    do
    {
        choice=displaylist();
        
        switch (choice)
        {
        case 1:
            display_array(arr,num);
            break;
        case 2:
            int secondlarge;
            secondlarge=secondlargest(arr,num);
            if(secondlarge==-1){
                cout<<"There is no second largest number in this array.";
            }
            else{
                cout<<"Second largest array number is :"<<secondlarge;
            }
            break;
        case 3:
            int numbeg;
            cout<<"Enter the number to add at begning: ";
            cin>>numbeg;
            insert_begin(arr,num,numbeg);
            break;
        case 4:
            int numend;
            cout<<"Enter the number to add at the end: ";
            cin>>numend;
            insert_end(arr,num,numend);
            break;
    
        

        case 5:
            int numloc;
            cout<<"Enter the number to add : ";
            cin>>numloc;
            insert_loc(arr,num,numloc);
            break;
               
            
        
        default:
            break;
        }
        
        }while (choice!=6);
    return 0;

}
        
        
        
        

        

        


      
        
