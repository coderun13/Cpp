/**
 * Sorting -> Ordering of elements
 * Bubble sort -> Repeatedly swap two adjacent elements if in wrong order.
 * n elements -> n-1 passes for element to go at correct position.
 * worst case->
 * 
 *
 *  
 */

# include<iostream>
# include <vector>
using namespace std;

void bubbleSort(vector<int> &v){
    int n=v.size();

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    return;
};

int main(){
    cout<<"Enter the size: ";
        int n;
        cin>>n;

    vector<int> v(n);
        cout<<"Enter the elements: ";
            for(int i=0;i<n;i++){
                cin>>v[i];
            }

    bubbleSort(v);

    cout<<"After Bubble sort:  ";
        for ( int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }   cout<<endl; 
}
