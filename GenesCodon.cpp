
#include<bits/stdc++.h>
using namespace std;

bool Comp(pair<int,int> a,pair<int,int> b){
    if(b.second-b.first<a.second-a.first)return true;
    return false;
}

vector<pair<int,int>> GeneCode(string s){
    vector<int>v1,v2;
    vector<pair<int,int>>ans;
    for(int i=0;i+2<s.size();i+=3){
        if(s[i]=='A' && s[i+1]=='T' && s[i+2]=='G'){
            v1.push_back(i);
        }
        if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='A'){
            v2.push_back(i+2);
        }
        if(s[i]=='T' && s[i+1]=='G' && s[i+2]=='A'){
            v2.push_back(i+2);
        }
        if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='G'){
            v2.push_back(i+2);
        }
    }
    for(int i=0;i<v1.size();i++){
        for(int j=v2.size()-1;j>=0;j--){
            if(v1[i]>=v2[j]){
                break;
            }
            else{
                ans.push_back({v1[i],v2[j]});
            }
        }
    }
    v1.clear();
    v2.clear();


    for(int i=1;i+2<s.size();i+=3){
        if(s[i]=='A' && s[i+1]=='T' && s[i+2]=='G'){
            v1.push_back(i);
        }
        if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='A'){
            v2.push_back(i+2);
        }
        if(s[i]=='T' && s[i+1]=='G' && s[i+2]=='A'){
            v2.push_back(i+2);
        }
        if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='G'){
            v2.push_back(i+2);
        }
    }
    for(int i=0;i<v1.size();i++){
        for(int j=v2.size()-1;j>=0;j--){
            if(v1[i]>=v2[j]){
                break;
            }
            else{
                ans.push_back({v1[i],v2[j]});
            }
        }
    }

    v1.clear();
    v2.clear();


    for(int i=2;i+2<s.size();i+=3){
        if(s[i]=='A' && s[i+1]=='T' && s[i+2]=='G'){
            v1.push_back(i);
        }
        if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='A'){
            v2.push_back(i+2);
        }
        if(s[i]=='T' && s[i+1]=='G' && s[i+2]=='A'){
            v2.push_back(i+2);
        }
        if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='G'){
            v2.push_back(i+2);
        }
    }
    for(int i=0;i<v1.size();i++){
        for(int j=v2.size()-1;j>=0;j--){
            if(v1[i]>=v2[j]){
                break;
            }
            else{
                ans.push_back({v1[i],v2[j]});
            }
        }
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    vector<pair<int,int>>v=GeneCode(s);
    sort(v.begin(),v.end(),Comp);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
    }
}


// #include<bits/stdc++.h>
// using namespace std;


// vector<pair<int,int>> GeneCode(string s){
//     vector<int>v1,v2;
//     vector<pair<int,int>>ans;
//     for(int i=0;i+2<s.size();i+=3){
//         if(s[i]=='A' && s[i+1]=='T' && s[i+2]=='G'){
//             v1.push_back(i);
//         }
//         if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='A'){
//             v2.push_back(i+2);
//         }
//         if(s[i]=='T' && s[i+1]=='G' && s[i+2]=='A'){
//             v2.push_back(i+2);
//         }
//         if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='G'){
//             v2.push_back(i+2);
//         }
//     }
//     for(int i=0;i<v1.size();i++){
//         for(int j=v2.size()-1;j>=0;j--){
//             if(v1[i]>=v2[j]){
//                 break;
//             }
//             else{
//                 ans.push_back({v1[i],v2[j]});
//             }
//         }
//     }
//     for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<"kr"<<endl;
//     for(int i=0;i<v2.size();i++){
//         cout<<v2[i]<<" ";
//     }
//     cout<<"kr"<<endl;
//     v1.clear();
//     v2.clear();


//     for(int i=1;i+2<s.size();i+=3){
//         if(s[i]=='A' && s[i+1]=='T' && s[i+2]=='G'){
//             v1.push_back(i);
//         }
//         if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='A'){
//             v2.push_back(i+2);
//         }
//         if(s[i]=='T' && s[i+1]=='G' && s[i+2]=='A'){
//             v2.push_back(i+2);
//         }
//         if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='G'){
//             v2.push_back(i+2);
//         }
//     }
//     for(int i=0;i<v1.size();i++){
//         for(int j=v2.size()-1;j>=0;j--){
//             if(v1[i]>=v2[j]){
//                 break;
//             }
//             else{
//                 ans.push_back({v1[i],v2[j]});
//             }
//         }
//     }
//     for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<"hllo"<<endl;
//     for(int i=0;i<v2.size();i++){
//         cout<<v2[i]<<" ";
//     }
//     cout<<"hllo"<<endl;
//     v1.clear();
//     v2.clear();


//     for(int i=2;i+2<s.size();i+=3){
//         if(s[i]=='A' && s[i+1]=='T' && s[i+2]=='G'){
//             v1.push_back(i);
//         }
//         if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='A'){
//             v2.push_back(i+2);
//         }
//         if(s[i]=='T' && s[i+1]=='G' && s[i+2]=='A'){
//             v2.push_back(i+2);
//         }
//         if(s[i]=='T' && s[i+1]=='A' && s[i+2]=='G'){
//             v2.push_back(i+2);
//         }
//     }
//     for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<"hlloo"<<endl;
//     for(int i=0;i<v2.size();i++){
//         cout<<v2[i]<<" ";
//     }
//     cout<<"hlloo"<<endl;
//     for(int i=0;i<v1.size();i++){
//         for(int j=v2.size()-1;j>=0;j--){
//             if(v1[i]>=v2[j]){
//                 break;
//             }
//             else{
//                 ans.push_back({v1[i],v2[j]});
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     string s1;
//     cin>>s1;
//     transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
//     vector<pair<int,int>>v=GeneCode(s1);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
//     }
// }