#include<iostream>
using namespace std;

int gradeMe(int multiple, int marks){ 
    
    int newMarks;
    int diff;
    
    diff = multiple - marks;
    
    if(diff<3)
        newMarks = multiple;
    else
        newMarks = marks;
    
    return newMarks;
}

int multiple(int marks){
    
    int multiple;
    //int originalMarks = marks;
    
    for(int i=1;i<=5;i++){
        
        if(marks%5 == 0){
            
            multiple = marks;
            break;
        }
        else
            ++marks;    
    }
       
    return multiple;
}

int main(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n;i++){
        
        if(arr[i]>35){
            
            int Multiple = multiple(arr[i]);
            cout<<gradeMe(Multiple, arr[i])<<endl;
        }
        else
             cout<<arr[i]<<endl;
    }
    
    return 0;
}
