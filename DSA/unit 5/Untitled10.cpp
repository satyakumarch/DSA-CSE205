#include <iostream>
using namespace std;

void min_heap(string a[], int m, int n){
   int j;
   string t;
   t= a[m];
   j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] < a[j])
         j = j + 1;
      if (t < a[j])
         break;
      else if (t >= a[j]) {
         a[j/2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
void build_minheap(string a[], int n) {
   int k;
   for(k = n/2; k >= 1; k--) {
      min_heap(a,k,n);
   }
}
int main() {
   int n, i;
   cin>>n;
  
   string a[n+1];
   for (i = 1; i <= n; i++) {
     cin>>a[i];
   }
   int elementToFind;
   cin>>elementToFind;

   if(elementToFind<1 || elementToFind > n){
      cout<<"Invalid entry"<<endl;
      return 0;
   }
   build_minheap(a, n);
   for (i = 1; i <= n; i++) {
     cout<<i<<": "<<a[i]<<endl;
   }
   cout<<"kth element in min-heap: "<<a[elementToFind] ;
}

output
Input 1 :
10
VehiculaCondimentumCurabitur.avi
AtVelitVivamus.doc
NuncRhoncus.tiff
ProinRisusPraesent.ppt
LoremIntegerTincidunt.doc
IdNislVenenatis.xls
MusEtiamVel.mp3
Sapien.avi
Sagittis.ppt
Pretium.avi
5
Output 1 :
1: AtVelitVivamus.doc
2: LoremIntegerTincidunt.doc
3: IdNislVenenatis.xls
4: ProinRisusPraesent.ppt
5: Pretium.avi
6: NuncRhoncus.tiff
7: MusEtiamVel.mp3
8: Sapien.avi
9: Sagittis.ppt
10: VehiculaCondimentumCurabitur.avi
kth element in min-heap: Pretium.avi
