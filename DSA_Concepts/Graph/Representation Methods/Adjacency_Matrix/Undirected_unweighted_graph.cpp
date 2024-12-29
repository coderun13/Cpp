/**
 * Vertex info is given
 * Edge info will be given (from where to where)
 * Represent by 2D Array
 * If weight is given, store the value of weight also with edge
 */

/**
 * Steps
 * Take input for the vertex and edges
 * Define 2D matrix and initalize by 0
 * for i = 0 to < edges 
 * take input for the matrix which is 1 
 * then make uv = vu = 1
 * Print the matrix from i to vertex - 1
 */

/** 
 * Work Flow
 * make int fucntion and take input
 * make matrix 
 * use for loop
 * and print the matrix 
 */

/**
 * Undirected unweighted graph
 * Vertex are 5 (0,1,2,3,4)
 * The edges are from (0,1)(1,0)(1,2)(2,1)(0,2)(2,0)(4,3)(3,4)
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
        cout<<"Enter the value of u and v in matrix: ";
        cin>>u>>v;
        AdjMat[u][v]= AdjMat[v][u] = 1;
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