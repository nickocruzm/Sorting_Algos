#include "libs.hpp"
#include "quicksort.hpp"

int main(){
    vector<int> vec = {23,31,33,21,8,78,54,98,23,89,81,47,37};

    cout<<"size: "<< vec.size()<<endl;
    quicksort(vec);
    

    for(int i = 0; i < vec.size(); i++){
        cout<< vec[i] <<endl;
    }


}
