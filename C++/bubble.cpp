#include <iostream>
#include <vector>

using namespace std ;

template <typename T> void bubblesort( vector<T> &v ) {

	int tmp ;
	int cii , cii1 ;

	for ( cii = 0 ; cii < v.size() ; cii++ ) {
		for ( cii1 = 0 ; cii1 < v.size() ; cii1++ ) {

			if ( v[cii1] > v[cii1+1] ) {

				tmp = v[cii1] ;
				v[cii1] = v[cii1+1] ;
				v[cii1+1] = tmp ;

			}

		}

	}

}

int main ( int argc , char** argv ) {

	vector<int> v ;

	int n , i ;

	for ( i = 0 ; i < 10 ; i++ ) {

		std::cin >> n ;
		v.push_back(n) ;

	}

	bubblesort( v ) ;

	for ( i = 1 ; i < 10 ; i++ ) {

		std::cout << v[i] << endl ;

	}

	return 0 ;

}





