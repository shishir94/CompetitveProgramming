#include<iostream>    // vector automatically manages size whereas in array we have specify the size of array we can add
                      // elements in the vector 
                      // refrence cpp vector methods -----> cplusplus.com
#include<vector>     // header file to create vector
using namespace std;
template <class T>
void display(vector<T> & v){      // this will display vector
    cout<<"Displaying this vector "<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    // Ways to create a vector :: 

    vector<int>vec1;     // zero length integer vector   // syntax of vector we have to specify type of vector
    int elements;
    int size;
    /*cin>>size;
    for(int i = 0;i<size;i++){
        cout<<"enter an element to add to this vector: ";
        cin>>elements;
        vec1.push_back(elements);
    }
    display(vec1);
    */

    vector<char>vec2(4);    // 4-element character vector
    /*
    vec2.pushback('5');
    display(vec2);
    */

    vector<char>vec3(vec2);   // 4-element character vector from vec2
   // display(vec3);

    vector<int>vec4(4,13);   // 6-element vector of 3's
    display(vec4);
    cout<<vec4.size()<<endl;    // print size of the vector vec4

    
return 0;
}