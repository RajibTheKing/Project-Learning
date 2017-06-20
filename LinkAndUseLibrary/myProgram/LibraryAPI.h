#include "MyInterface.h"

class LibraryAPI : public MyInterface
{
public:
	LibraryAPI();
	~LibraryAPI();
	static LibraryAPI* getInstance();
private:

};

static LibraryAPI* m_pLibraryAPI = nullptr;
