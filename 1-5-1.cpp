//

vector<int> ans;
vector<int> printNos(int n) {
    // Write Your Code Here
    if(n==0) return ans;
    printNos(n-1);
    ans.emplace_back(n);
    return ans;
}

//Good practice

void helper(int x,vector<int>&arr){

  if(x<=0){

    return;

  }

  helper(x-1,arr);

  arr.push_back(x);

}

vector<int> printNos(int x) {

    vector<int>arr;

    helper(x,arr);

    return arr;

}