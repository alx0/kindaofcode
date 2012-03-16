#include <iostream>
#include <vector>

using namespace std ;

template <typename T> void elimn ( int n , vector<T> &v ) {

	int i ; 

	for ( i = 0 ; i < v.size() ; i++ ) {

		if ( v[i] == n ) v.erase(v.begin()+i) ;

	}

}

int main ( int argc , char** argv ) {

	vector<int> v ;
	int n = 3 ;

	v.push_back(1) ;
	v.push_back(5) ;
	v.push_back(3) ;
	v.push_back(4) ;

	elimn( n , v ) ;

	for ( int i = 0 ; i < v.size() ; i++ ) {

		cout << v[i] << endl ;

	}

	return 0 ;

}
