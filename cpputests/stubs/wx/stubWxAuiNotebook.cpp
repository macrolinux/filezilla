
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

#include "wx/aui/auibook.h"

DEFINE_EVENT_TYPE(wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_UP);
DEFINE_EVENT_TYPE(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE);
DEFINE_EVENT_TYPE(wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_UP);
DEFINE_EVENT_TYPE(wxEVT_COMMAND_AUINOTEBOOK_BG_DCLICK);
DEFINE_EVENT_TYPE(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGED);

const wxEventTable wxAuiNotebook::sm_eventTable = wxEventTable();
wxEventHashTable wxAuiNotebook::sm_eventHashTable (wxAuiNotebook::sm_eventTable);

wxColor wxAuiStepColour(const wxColor& c, int ialpha)
{
	FAIL("wxAuiStepColour");
	return wxColor();
}


const wxEventTable* wxAuiNotebook::GetEventTable() const
{
	FAIL("wxAuiNotebook::GetEventTable");
	return &sm_eventTable;
}

wxEventHashTable& wxAuiNotebook::GetEventHashTable() const
{
	FAIL("wxAuiNotebook::GetEventHashTable");
	return sm_eventHashTable;
}

wxClassInfo *wxAuiNotebook::GetClassInfo() const
{
	FAIL("wxAuiNotebook::GetClassInfo");
	return NULL;
}

wxWindow* wxAuiNotebook::GetPage(size_t page_idx) const
{
	FAIL("wxAuiNotebook::GetPage");
	return NULL;
}

bool wxAuiNotebook::SetFont(const wxFont& font)
{
	FAIL("wxAuiNotebook::SetFont");
	return true;
}


size_t wxAuiNotebook::SetSelection(size_t new_page)
{
	FAIL("wxAuiNotebook::SetSelection");
	return 0;
}

bool wxAuiNotebook::RemovePage(size_t page)
{
	FAIL("wxAuiNotebook::RemovePage");
	return true;
}

bool wxAuiNotebook::DeletePage(size_t page)
{
	FAIL("wxAuiNotebook::DeletePage");
	return true;
}

int wxAuiNotebook::CalculateTabCtrlHeight()
{
	FAIL("wxAuiNotebook::CalculateTabCtrlHeight");
	return 0;
}

wxSize wxAuiNotebook::CalculateNewSplitSize()
{
	FAIL("wxAuiNotebook::CalculateNewSplitSize");
	return wxSize();
}

bool wxAuiNotebook::Create(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
{
	FAIL("wxAuiNotebook::Create");
	return true;
}

void wxAuiNotebook::SetArtProvider(wxAuiTabArt* art)
{
	FAIL("wxAuiNotebook::SetArtProvider");
}

bool wxAuiNotebook::AddPage(wxWindow* page, const wxString& caption, bool select, const wxBitmap& bitmap)
{
	FAIL("wxAuiNotebook::AddPage");
	return true;
}

void wxAuiNotebook::SetSelectedFont(const wxFont& font)
{
	FAIL("wxAuiNotebook::SetSelectedFont");
}

size_t wxAuiNotebook::GetPageCount() const
{
	FAIL("wxAuiNotebook::GetPageCount");
	return 0;
}

int wxAuiNotebook:: GetSelection() const
{
	FAIL("wxAuiNotebook::GetSelection");
	return 0;
}

void wxAuiNotebook::SetUniformBitmapSize(const wxSize& size)
{
	FAIL("wxAuiNotebook::SetUniformBitmapSize");
}

void wxAuiNotebook::SetMeasuringFont(const wxFont& font)
{
	FAIL("wxAuiNotebook::SetMeasuringFont");
}

wxAuiTabCtrl* wxAuiNotebook::GetActiveTabCtrl()
{
	FAIL("wxAuiNotebook::GetActiveTabCtrl");
	return NULL;
}

void wxAuiNotebook::SetWindowStyleFlag(long style)
{
	FAIL("wxAuiNotebook::SetWindowStyleFlag");
}

void wxAuiNotebook::Split(size_t page, int direction)
{
	FAIL("wxAuiNotebook::Split");
}

wxAuiNotebook::wxAuiNotebook()
{
	FAIL("wxAuiNotebook::wxAuiNotebook");
}

wxAuiNotebook::~wxAuiNotebook()
{
	FAIL("wxAuiNotebook::~wxAuiNotebook");
}

static wxAuiNotebookPage gPage;

wxAuiNotebookPage& GetPage(size_t idx)
{
	FAIL("wxAuiNotebook::GetPage");
	return gPage;
}

void wxAuiNotebook::UpdateTabCtrlHeight()
{
	FAIL("wxAuiNotebook::UpdateTabCtrlHeight");
}

void wxAuiNotebook::SetTabCtrlHeight(int height)
{
	FAIL("wxAuiNotebook::SetTabCtrlHeight");
}

int wxAuiNotebook::GetPageIndex(wxWindow* page_wnd) const
{
	FAIL("wxAuiNotebook::GetPageIndex");
	return 0;
}

bool wxAuiNotebook::FindTab(wxWindow* page, wxAuiTabCtrl** ctrl, int* idx)
{
	FAIL("wxAuiNotebook::FindTab");
	return true;
}

wxAuiTabContainer::wxAuiTabContainer()
{
	FAIL("wxAuiTabContainer::wxAuiTabContainer");
}

wxAuiTabContainer::~wxAuiTabContainer()
{
	FAIL("wxAuiTabContainer::~wxAuiTabContainer");
}

size_t wxAuiTabContainer::GetPageCount() const
{
	FAIL("wxAuiTabContainer::GetPageCount");
	return 0;
}

wxAuiNotebookPage gNotebookPage;
wxAuiNotebookPage& wxAuiTabContainer::GetPage(size_t idx)
{
	FAIL("wxAuiTabContainer::GetPage");
	return gNotebookPage;
}


void wxAuiTabContainer::Render(wxDC* dc, wxWindow* wnd)
{
	FAIL("wxAuiTabContainer::Render");
}

void wxAuiDefaultTabArt::DrawButton(wxDC& dc, wxWindow* wnd, const wxRect& in_rect, int bitmap_id,
		int button_state, int orientation, wxRect* out_rect)
{
	FAIL("wxAuiDefaultTabArt::DrawButton");
}

void wxAuiDefaultTabArt::SetNormalFont(const wxFont& font)
{
	FAIL("wxAuiDefaultTabArt::SetNormalFont");
}

int wxAuiDefaultTabArt::GetIndentSize()
{
	FAIL("wxAuiDefaultTabArt::GetIndentSize");
	return 0;
}

void wxAuiDefaultTabArt::SetMeasuringFont(const wxFont& font)
{
	FAIL("wxAuiDefaultTabArt::SetMeasuringFont");
}

void wxAuiDefaultTabArt::SetFlags(unsigned int flags)
{
	FAIL("wxAuiDefaultTabArt::SetFlags");
}

int wxAuiDefaultTabArt::ShowDropDown(wxWindow* wnd, const wxAuiNotebookPageArray& items, int active_idx)
{
	FAIL("wxAuiDefaultTabArt::ShowDropDown");
	return 0;
}

void wxAuiDefaultTabArt::DrawTab(wxDC& dc, wxWindow* wnd, const wxAuiNotebookPage& pane,
		const wxRect& in_rect, int close_button_state, wxRect* out_tab_rect, wxRect* out_button_rect, int* x_extent)
{
	FAIL("wxAuiDefaultTabArt::DrawTab");
}

wxAuiDefaultTabArt::wxAuiDefaultTabArt()
{
	FAIL("wxAuiDefaultTabArt::wxAuiDefaultTabArt");
}

wxAuiDefaultTabArt::~wxAuiDefaultTabArt()
{
	FAIL("wxAuiDefaultTabArt::~wxAuiDefaultTabArt");
}

int wxAuiDefaultTabArt::GetBestTabCtrlSize(wxWindow* wnd, const wxAuiNotebookPageArray& pages, const wxSize& required_bmp_size)
{
	FAIL("wxAuiDefaultTabArt::GetBestTabCtrlSize");
	return 0;
}

void wxAuiDefaultTabArt::SetSelectedFont(const wxFont& selected_font)
{
	FAIL("wxAuiDefaultTabArt::SetSelectedFont");
}

void wxAuiDefaultTabArt::DrawBackground(wxDC& dc, wxWindow* wnd, const wxRect& rect)
{
	FAIL("wxAuiDefaultTabArt::DrawBackground");
}

void wxAuiDefaultTabArt::SetSizingInfo(const wxSize& tab_ctrl_size, size_t tab_count)
{
	FAIL("wxAuiDefaultTabArt::SetSizingInfo");
}

wxSize wxAuiDefaultTabArt::GetTabSize(wxDC& dc, wxWindow* wnd, const wxString& caption, const wxBitmap& bitmap,
		bool active, int close_button_state, int* x_extent)
{
	FAIL("wxAuiDefaultTabArt::GetTabSize");
	return wxSize();
}

wxAuiTabArt* wxAuiDefaultTabArt::Clone()
{
	FAIL("wxAuiDefaultTabArt::Clone");
	return NULL;
}


wxAuiNotebookPageArray::~wxAuiNotebookPageArray()
{
	FAIL("wxAuiNotebookPageArray::~wxAuiNotebookPageArray");
}

wxAuiTabContainerButtonArray::~wxAuiTabContainerButtonArray()
{
	FAIL("wxAuiTabContainerButtonArray::~wxAuiTabContainerButtonArray");
}
