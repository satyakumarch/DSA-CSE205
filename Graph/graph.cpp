//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n, i, j, edges, src_vrt, dest_vrt;
//    cout<<"Enter no. of vertices and edges: ";
//    cin>>n>>edges;
//    int adj[n][n];
//    for(i=0;i<n;i++){
//        for(j=0;j<n;j++){
//            adj[i][j]=0;
//        }
//    }
//    cout<<"Input src and dest vertices of edges\n";
//    for(i=0;i<edges;i++){
//        cin>>src_vrt>>dest_vrt;
//        adj[src_vrt][dest_vrt] = 1;
//    }
//    cout<<"\nAdjacency matrix is:\n";
//    for(i=0;i<n;i++){
//        cout<<" ";
//        for(j=0;j<n;j++){
//            cout<<adj[i][j]<<'\t';
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//output
//Enter no. of vertices and edges: 5 6
//Input src and dest vertices of edges
//0 1
//1 2
//1 3
//2 3
//3 0
//4 2
//
//Adjacency matrix is:
// 0      1       0       0       0
// 0      0       1       1       0
// 0      0       0       1       0
// 1      0       0       0       0
// 0      0       1       0       0

#include<iostream>
using namespace std;
int main(){
	int i,j,n,edges,src_vtx,des_vtx;
	cout<<"Enter the vertex and edges:";
	cin>>n>>edges;
	int adj[n][n];
	for(int i=0;i<n;i++){
		for(j=0;j<n;j++){
			adj[i][j]=0;			
		}
	}
	cout<<"Enter src_vtx and des_vtx\n";
	for(int i=0;i<edges;i++){
		cin>>adj[src_vtx][des_vtx];
		adj[src_vtx][des_vtx]=1;
		
	}
	cout<<"\n Adjacency of the matrix \n";
	for(int i=0;i<n;i++){
		cout<<" ";
		for(j=0;j<n;j++){
			cout<<adj[i][j]<<'\t';
		}
		cout<<endl;
	}
	return 0;
}





























