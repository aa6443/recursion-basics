#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool closeStrings(string word1,string word2){
    //checking the length of string equal or not 
    if(word1.size() != word2.size()) return false;
    //hash map 
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;
    //creating set 
    set<char> st1;
    set<char> st2;
    // creating multi set 
    multiset<int> s1;
    multiset<int> s2;
    //now iterating through string and storing in hash map 
    for ( auto &it : word1){
        m1[it]++;
    }
    for ( auto &it : word2){
        m2[it]++;
    }
    //now inserting the first element of the hashmap into the set and second 
    //element into multiset 
    for(auto &it : m1){
        st1.insert(it.first);
        s1.insert(it.second);
    }
    for(auto &it:m2){
        st2.insert(it.first);
        s2.insert(it.second);
    }
    //compairing and returning the result
    return ((st1 == st2) && (s1==s2));
}


int main()
{
    string word1 = "abc" ;
    string word2 = "bca";
    bool ans = closeStrings(word1,word2);
    cout<<ans<<endl;

    return 0;
}