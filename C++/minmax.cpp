#include <iostream>
#include <vector>

using namespace std ;

template <typename T> int min( vector<T> &v) {

	int min = v[1] ;

	for ( int i = 0 ; i < v.size() ; i++ ) {

		if ( v[i] < min ) min = v[i] ;

	}

	return min ;

}

template <typename T> int max( vector<T> &v) {

	int max = v[1] ;

	for ( int i = 0 ; i < v.size() ; i++ ) {

		if ( v[i] > max ) max = v[i] ;

	}

	return max ;

}

int main ( int argc , char** argv ) {

	vector<int> v ;

	v.push_back(5) ;
	v.push_back(100) ;
	v.push_back(4) ;
	v.push_back(2) ;

	cout << "Il maggiore e' : " << max(v) << " ed il minore : " << min(v) << endl ;

	return 0 ;

}
