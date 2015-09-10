#include <queue>
#include <cstdio>

using namespace std;

int L,p,N;

void solve(){
  A[N} = L;
  B[N] = 0;
  N ++;
  priority_queue<int> que;
  int ans =0;
  int pos = 0;
  int tank = p;

  for(int i = 0;i<N;i++){
    int d = A[i] - pos;
    while(tank -d <0){
      if (que.empty()){
	puts("-1");
	return;
      }
      tank += que.top();
      que.pop();
      ans ++;
    }
    tank -= d;
    pos = A[i];
    que.push(B[i]);
  }
  printf("%d\n",ans);
}
