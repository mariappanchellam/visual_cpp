#include<iostream>
#include<vector>
using namespace std;
int solution() {
     vector<int> A ={-20,-10,30,40,50};
     int X= -10;
     int N = A.size();

     if (N == 0) {

         return -1;

     }

     int l = 0;

     int r = N - 1;

     while (l <= r) {

         int m = (l + r) / 2;
      
         if(A[m]==X){
          return m;
         }
      
        if (A[m] > X) {
            r = m - 1;
        } else {

            l = m + 1;

        }

    }

    if (A[l] == X) {

        return l;

    }

    return -1;

}
int main()
{
    int x =solution();
    cout<<x<<endl;
    return 0;
}
