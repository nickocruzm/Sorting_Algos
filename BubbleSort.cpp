#include "BubbleSort.hpp"    

void BubbleSort(vector<int>& vec){   
    int n = vec.size() - 1;
    
    for(int i = 0; i < n; i++){

        int m = n - i - 1;

        for(int j = 0; j < m; j++){

            if(vec[j] > vec[j-1]){
                swap(vec[j],vec[j-1]);
            }

        }
    }
}
