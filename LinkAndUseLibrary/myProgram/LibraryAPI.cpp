#include "LibraryAPI.h"

LibraryAPI::LibraryAPI()
{

}

LibraryAPI::~LibraryAPI()
{

}

LibraryAPI* LibraryAPI::getInstance()
{
	if(m_pLibraryAPI == nullptr)
	{
		m_pLibraryAPI = new LibraryAPI();
	}

	return m_pLibraryAPI;
}