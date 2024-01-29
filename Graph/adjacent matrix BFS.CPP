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
//    cout<<"\nAdjacency matrix:\n"; 
//    for(i=0;i<n;i++){ 
//        cout<<" "; 
//        for(j=0;j<n;j++){ 
//            cout<<adj[i][j]<<'\t'; 
//        } 
//        cout<<endl; 
//    } 
    int start, status[n], que[15]; 
    cout<<"\nEnter the starting vertex: "; 
    cin>>start; 
    for(i=0;i<n;i++){ 
        status[i] = 0; 
    } 
    int f, r; 
    f = r = 0; 
    que[f] = start; 
    status[start] = 1; 
    int w, k=0, bfs[n]; 
    while(f != -1){ 
        w = que[f]; 
        if(f==r){ 
            f=r=-1; 
        } 
        else{ 
            f++; 
        } 
        status[w] = 2; 
        bfs[k] = w; 
        k++; 
        for(int a=0;a<n;a++){ 
            if(adj[w][a] != 0 && status[a] == 0){ 
                que[++r] = a; 
                if(r==0){ 
                    f=0; 
                } 
                status[a] = 1; 
            } 
        } 
    } 
    cout<<"\nBFS traversal:\n"; 
        for(int q=0; q<k; q++){ 
            cout<<bfs[q]<<" "; 
        } 
    return 0; 
}

//Enter no. of vertices and edges: 4 5
//Input src and dest vertices of edges
//0 1
//0 3
//1 3
//2 0
//3 2
//
//Adjacency matrix:
// 0      1       0       1
// 0      0       0       1
// 1      0       0       0
// 0      0       1       0
//
//Enter the starting vertex: 0
//
//BFS traversal:
//0 1 3 2


//
//Enter no. of vertices and edges: 7 11
//Input src and dest vertices of edges
//0 1
//0 3
//3 5
//3 6
//5 2
//2 0
//1 4
//1 5
//4 7
//7 5
//6 7
//
//Adjacency matrix:
// 0      1       0       1       0       0       0
// 0      0       0       0       1       1       0
// 1      0       0       0       0       0       0
// 0      0       0       0       0       1       1 
// 0      0       0       0       0       0       0
// 1      0       1       0       0       0       0
// 0      0       0       0       0       0       0
//
//Enter the starting vertex: 0
//
//BFS traversal:
//0 1 3 4 5 6 2



#include<iostream>
using namespace std;

int n,i,j,edges,src_vtx,des_vtx;
cout<<"Enter the vertex and edges:";
int cin>>n<<edges;
int adj[i][j];
for(int i=0;i<n;i++){
	for(j=0;j<n;j++){
		adj[i][j]=0;
	}
}
cout<<"Input src_vtx and des_vtx of edges:";
for(int i=0;i<edges,i++){
cin>>src_vtx>>des_vtx;
adj[src_vtx][des_vtx]=1;	
}
cout<<"Adjacency matrix:"<<endl;
for(int i=0;i<n;i++){
	cout<<" ";
	for(j=0;j<n;j++){
		cout<<adj[i][j]<<'\t';
	}
	cout<<endl;
}


