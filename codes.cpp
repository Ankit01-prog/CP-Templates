#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
   /* pair<string, int > pair1 =make_pair("Talent",234);
    pair<string, string> pair2 = make_pair("Ankit","Neha");
    cout << pair1.first << pair1.second << pair2.first << pair2.second;
    tuple<int, int, int> t{1,2,3};
    cout << get<0> (t) << get<1> (t) << get<2> (t) << endl;
   */
  /* set <int> s;
   for(int i=0;i<n;++i){
     int nm;
     cin>> nm;
     s.insert(nm);
   }
  cout << s.size() << endl;
  
  */
 /* map<int, int> m;
  for(int i=0;i<10;i++){
    m[i] = i;
  }
  for(auto it:m){
  cout << it.first << endl << it.second << endl;
  }
  */
  priority_queue<int> pq;
  pq.push(2);
  pq.push(3);
  pq.push(1);
  pq.push(7);
  cout << pq.top();
  pq.pop();
  cout << pq.top();
  
   
   
   
    return 0;
}