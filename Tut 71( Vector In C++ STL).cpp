#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
	cout<<"displaying this vector: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){ 
    //vector<int> vec1;
    int element, size =5;
    //cout<<"Enter the size of your vector"<<endl;
    //cin>>size;
    //for (int i = 0; i < size; i++)
    //{
     //   cout<<"Enter an element to add to this vector: ";
    //    cin>>element;
    //    vec1.push_back(element);
    //}
    //vec1.pop_back();
    //display(vec1);
    //use of iterator and insert
   // vector<int> ::  iterator iter = vec1.begin();
//	vec1.insert(iter+2,5, 566);//iter +2 means 566 is placed after v2 element that we input.  iter, 5 means 566 is repatedly coming for 5 times
   // display(vec1);    
   
   
     //  vector<int> vec1;      //zero length integer vector
  //  vector<char> vec2(4);  //4-element character vector
  //  vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(4,13); //6-element vector of 3s
    display(vec4);
    cout<<vec4.size();
    return 0;
}
