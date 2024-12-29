/**
 * Work Flow
 * make main function and take input for vertex and edges
 * Create vector
 * Take input for u, v and weight in array 
 * push u, weight in v and 
 * v, weight in u(create edges)
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

    vector<pair<int,int>>AdjList[vertex];

    int u, v, weight;
    for(int i = 0; i<edges;i++)
    {
        cout<<"enter the value of u, v and weight in array: ";
        cin>>u>>v>>weight;
        AdjList[u].push_back(make_pair(v, weight));
        AdjList[v].push_back(make_pair(v,weight));
    }

    for (int i = 0; i<vertex;i++)
    {
        cout<<"The edge is from: "<<i<<" -> ";
            for(int j = 0; j<AdjList[i].size();j++)
            {
                cout<<"("<<AdjList[i][j].first<<" "<<AdjList[i][j].second<<")"<<" ";
            }
                cout<<endl;
    }
}
