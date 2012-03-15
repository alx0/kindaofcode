#include <iostream>
#include <vector>

using namespace std ;

template <typename T> int somma( vector<T> &v) {

	int somma = 0 ;
	int i  ;
	
	for ( i = 0 ; i < v.size() ; i++ ) {

		somma += v[i] ;

	}

	return somma ;

}

int main ( int argc , char** argv ) {

	vector<int> v ;
	int i ;
	for ( i = 0 ; i < 100 ; i++ ) {

		v.push_back(i) ;

	}

	cout << "La somma e': " << somma(v) << endl ;

	return 0 ;

}
