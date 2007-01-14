#ifndef __DNDOBJECTS_H__
#define __DNDOBJECTS_H__

//#ifdef __WXMSW__
//#define FZ3_USESHELLEXT 1
//#else
#define FZ3_USESHELLEXT 0
//#endif

#include "xmlfunctions.h"

class wxRemoteDataFormat : public wxDataFormat
{
public:
	wxRemoteDataFormat()
		: wxDataFormat(_T("FileZilla3 remote data format v1"))
	{
	}
};

class CRemoteDataObject : public wxDataObjectSimple
{
public:
	CRemoteDataObject(const CServer& server);
	
	virtual size_t GetDataSize(const wxDataFormat& format ) const;
	virtual bool GetDataHere(const wxDataFormat& format, void *buf ) const;

	virtual bool SetData(size_t len, const void* buf);

	void Finalize();

	bool DidSendData() const { return m_didSendData; }

protected:
	CServer m_server;

	const wxRemoteDataFormat m_remoteFormat;

	wxFileDataObject m_fileDataObject;

	CXmlFile m_xmlFile;

	bool m_didSendData;
};

#if FZ3_USESHELLEXT

// This class checks if the shell extension is installed and
// communicates with it.
class CShellExtensionInterface
{
public:
	CShellExtensionInterface();
	virtual ~CShellExtensionInterface();

	bool IsLoaded() const { return m_shellExtension != 0; }

	bool InitDrag(const wxString& source);
	
	wxString GetTarget();

protected:
	void* m_shellExtension;
	HANDLE m_hMutex;
	HANDLE m_hMapping;
};

#endif //__WXMSW__

#endif //__DNDOBJECTS_H__