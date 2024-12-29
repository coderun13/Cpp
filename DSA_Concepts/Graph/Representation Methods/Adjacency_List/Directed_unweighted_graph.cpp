/**
 * Work Flow
 * make main function and take input for vertex and edges
 * Create vector
 * Take input for u and v in array 
 * push u in v
 * print the edge is from where
 */

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int edges, vertex;
    cout<<"Enter the value of vertex: ";
    cin>>vertex;
    cout<<"Enter the number of edges: ";
    cin>>edges;

    vector<int>AdjList[vertex];

    int u, v;
    for(int i = 0; i<edges;i++)
    {
        cout<<"enter the value of u and v in array: ";
        cin>>u>>v;
        AdjList[u].push_back(v);
    }

    for (int i = 0; i<vertex;i++)
    {
        cout<<"The edge is from: "<<i<<" -> ";
            for(int j = 0; j<AdjList[i].size();j++)
            {
                cout<<AdjList[i][j]<<" ";
            }
                cout<<endl;
    }
}
