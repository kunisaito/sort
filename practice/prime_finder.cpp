#include <cstdio>
#include <vector>
#include <map>
using namespace std;
//judge method
bool is_prime(int n){
  for (int i = 2;i * i<=n;i++){
    if(n%i == 0)return false;
  }
  return n!=1;
}
//search all of values
vector<int> divisor(int n){
  vector<int> res;
  for(int i = 1;i * i<=n;i++){
    if(n%i ==0){
      res.push_back(i);
    
    if(i != n/i)res.push_back(n/i);
  }
}
return res;
}
map<int, int> prime_factor(int n){
  map<int, int>res;
  for(int i = 2;i*i<=n;i ++){
    while(n%i ==0){
      ++res[i];
      n = n/i;
    }
  }
  if(n != 1) res[n] = 1;
  return res;
  
}
int main(void){
  vector<int> res1 = divisor(32);
  map<int,int>res2 = prime_factor(24);
  map<int,int>::iterator it2;
  vector<int>::iterator it;
  for(it = res1.begin();it!= res1.end();it++){
    printf("%d\n",*it);
  }
  for(it2 = res2.begin();it2!=res2.end();it2++){
    printf("%d,%d\n",it2->first,it2->second);
  }
  
  return 0;
}
