#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> vecNumList;

void deduplicate (vector<int> vecnNumList){
    vector<int>::iterator iter;
    vector<int> filteredVecList;


    for(int i=0;i<vecNumList.size();i++){

        bool trig  = true;

        for(int k=0;k<i;k++){

            if(vecNumList[i] == vecNumList[k]){
                trig = false;
                break;
            }
        }
        if(trig){

            filteredVecList.push_back(vecNumList[i]);
            
        }
    }

    cout << "The deduplicated vector is: " << "[";

    for (iter = filteredVecList.begin(); iter != filteredVecList.end(); ++iter ){

        if (iter != filteredVecList.begin()) cout << ", ";
        cout << *iter;

        
    }
    cout << "]";
    


}
void inputPusher(){
    int numInput = 0;
    cout << "Enter the vector elements: " << "\n";
    while (cin >> numInput){

    vecNumList.push_back(numInput);
        
    if (cin.get() == '\n'){

        break;

    }
    if (cin.eof()){

        break;

    }
    }

}

int main () {
    
    inputPusher();
    deduplicate(vecNumList);

    return 0; 
}