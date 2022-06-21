#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(int v[][100], int x){
for(int i=0;i<x;i++){

  for(int j=0;j<x;j++){

    if(j+i == 2){
      cout<<v[j][i]<<" , ";
    }
  }
}
  
}

int main() {
  int vec[][100] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
  int x=3;
  print(vec,x);
}