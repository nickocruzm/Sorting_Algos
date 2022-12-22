#include "quicksort.hpp"

void quicksort(vector<int>& vec){

    for(int i = 0; i < vec.size(); i++){

        if(i + 1 == vec.size()){
            break;
        }
        
        for(int j = i+1; j < vec.size(); j++){
            if(vec[j] < vec[i]){
                swap(vec[i],vec[j]);
            }
        }
    }
}