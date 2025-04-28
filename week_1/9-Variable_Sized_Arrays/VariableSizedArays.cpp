#include <iostream>
#include <vector>

int main() {
    int num_arrays,num_q;
    std::cin>>num_arrays>>num_q;
    std::vector<std::vector<int>> arrays;

    for(int i=0;i<num_arrays;i++){ //entrada dos arryas
        std::vector<int> entry_vector;
        int k;
        std::cin>>k;
        for(int j=0;j<k;j++){
            int entry;
            std::cin>>entry;
            entry_vector.push_back(entry);
        }
        arrays.push_back(entry_vector);
    }
    std::vector<int> query_results;
    for(int k=0;k<num_q;k++){
        int q_vector,q_index;
        std::cin>>q_vector>>q_index;
        query_results.push_back(arrays[q_vector][q_index]);
    }
    for(int l=0;l<query_results.size();l++){
        std::cout<<query_results[l]<<std::endl;
    }
    return 0;
}