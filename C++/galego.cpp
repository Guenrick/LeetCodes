//Caua Guenrick Alves 23.2.4002
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;    

int main(){
    vector<int> vetor = {11, 15, 2, 7};
    int target = 9;
    
    sort(vetor.begin(), vetor.end()); 
    
    vector<int>::iterator it1, it2;

    it1 = vetor.begin();
    it2 = vetor.end();
    --it2;
    int sum;

    for (int i = 0; i < vetor.size(); i++)
    {
        sum = *it1 + *it2;

        if(sum == target){
            cout << sum << endl;
            break;
        } 
        else if(sum > target) {
            --it2;
        }
        else
            ++it1;
    }


return 0;
}