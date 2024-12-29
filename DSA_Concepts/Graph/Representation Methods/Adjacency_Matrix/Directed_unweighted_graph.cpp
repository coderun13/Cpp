/** 
 * Work Flow
 * make int fucntion and take input
 * make matrix 
 * use for loop
 * and print the matrix 
 */

/**
 * Undirected weighted graph
 * Vertex are 5 (0,1,2,3,4)
 * The edges are from (0,1)(1,0)(1,2)(2,1)(0,2)(2,0)(4,3)(3,4)
 * Weight is 11,12,13,14,15,16
 */

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int vertex, edges;
    cout<<"Enter the number of vertex: ";
    cin>>vertex;
    cout<<"Enter the number of edges: ";
    cin>>edges;

    vector<vector<bool>>AdjMat(vertex, vector<bool>(vertex,0));

    int u,v;
    for (int i = 0;i<edges; i++)
    {
        cout<<"Enter the value of u and v and weight in matrix: ";
        cin>>u>>v;
        AdjMat[u][v]= 1;
    }

    for(int i = 0; i<vertex;i++)
    {
        for(int j = 0; j<vertex;j++)
        {
            cout<<AdjMat[i][j]<<" ";

        }
          cout<<endl;
    }
}