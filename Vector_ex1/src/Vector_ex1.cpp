//============================================================================
// Name        : Vector_ex1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a[]={17,12,33,15,62,45};
	vector<int> v(a,a+6);
	cout<<v.size()<<endl;
	v.pop_back();
	cout<<v.size()<<endl;
	v.push_back(19);
	cout<<v.front()<<" "<<v.back()<<endl;
    sort(v.begin(),v.begin()+4);
    for(int i=0;i<v.size();i++)
    	cout<<v[i]<<" ";





	cout << "\n!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
