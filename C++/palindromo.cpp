#include <iostream>
#include <vector>

template <typename T> bool palindromo( std::vector<T> &v) {

	int i ;

	for ( i = 0 ; i < v.size()/2 ; i++ ) {

		if ( v[i] != v[v.size()-i-1] ) return false ;

	}

	return true ;

}

int main ( int argc , char** argv ) {

	std::vector<int> v ;

	v.push_back(1) ;
	v.push_back(1) ;
	v.push_back(2) ;
	v.push_back(1) ;
	v.push_back(1) ;

	if ( palindromo(v) ) std::cout << "The vector is palindrome" << std::endl ;
	else std::cout << "The vector isn't palindrome" << std::endl ;

	return 0 ;

}

	
