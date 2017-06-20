
#include <iostream>
#include "MyInterface.h"
#include "LibraryAPI.h"

using namespace std;

int main()
{

	int ans = LibraryAPI::getInstance()->AddSum(10, 12);
	int ans2 = LibraryAPI::getInstance()->Iterate(10);

	cout<<"Answer found from library: "<<ans<<", "<<ans2<<endl;
}