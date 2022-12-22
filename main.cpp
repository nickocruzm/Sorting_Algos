#include "libs.hpp"

void quicksort(vector<int>& );

int main(){
    vector<int> vec = {3,2,1};

    cout<< vec.size();
    quicksort(vec);
    

    for(int i = 0; i < vec.size(); i++){
        cout<< vec[i] <<endl;
    }


}


void quicksort(vector<int>& vec){

    for(int i = 0; i < vec.size(); i++){
        for(int j = i+1; j < vec.size(); j++){
            if(vec[j] < vec[i]){
                swap(vec[i],vec[j]);
            }
        }
    }
}