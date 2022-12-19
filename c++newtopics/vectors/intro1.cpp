// insert , pop functions of vector

#include<iostream>    // vector automatically manages size whereas in array we have specify the size of array we can add
                      // elements in the vector 
                      // refrence cpp vector methods -----> cplusplus.com
#include<vector>     // header file to create vector
using namespace std;

void display(vector<int> & v){      // this will display vector
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>vec1;  
    int elements;
    int size;
    cin>>size;
    for(int i = 0;i<size;i++){
        cout<<"enter an element to add to this vector: ";
        cin>>elements;
        vec1.push_back(elements);
    }
    vec1.pop_back();    // remove the last element from the vector
    vector<int>:: iterator iter= vec1.begin();    // syntax to create iterator(pointer)
    vec1.insert(iter,566);        // insert "566" at the beginning of the vector
    display(vec1);

    vec1.insert(iter+1,566);   // insert "566" after 1st element
    display(vec1);

    vec1.insert(iter+1,5,566);   // insert  5 times "566" after 1st element
    display(vec1);


return 0;
}