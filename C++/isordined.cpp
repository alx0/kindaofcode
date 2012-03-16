#include <iostream>
#include <vector>

template <typename T> bool isOrdined( std::vector<T> &v ) {

	for ( int i = 0 ; i < v.size()-1 ; i++ ) {

		if ( v.at(i) > v.at(i+1) ) return false ;

	}

	return true ;

}

int main ( int argc , char** argv ) {

	std::vector<int> v ;

	v.push_back(1) ;
	v.push_back(2) ;
	v.push_back(3) ;

	std::cout << isOrdined(v) << std::endl ;

	return 0 ;

}
