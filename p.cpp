#include<bits/stdc++.h>
using namespace std ;
typedef unsigned long long ull;
namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}
ull fromBin(string binary)
{
	ull total = 0;
    for(int j = 0; j < binary.length(); j++)
				total = (total<<1) + binary[j] - '0';
	return total;
}
int main()
{
    string str = "1111";
	// istringstream ss(str);
	// ull num ;
	// ss >> num;
	ull n = fromBin(str) ;
	cout<<n;
    return 0 ;
}
