// This code is of coding ninjas problem of subsequences of string !!

#include<iostream>
using namespace std;
#include<vector>
#include<string>

void solve(string str, string output, int index, vector<string> &ans){
    // base case
    if (index >= str.length()){
        ans.push_back(output);

        return;
    }

    // exclude the element
    solve(str, output, index+1, ans);

    // include the element
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);

}

vector<string> subsequences(string str){

   vector<string> ans;
   string output = "";
   int index=0;
   solve(str, output, index, ans);
   return ans;
}

int main(){
 
    char arr[] = "abc";
    int n = 3;

    return 0;
}