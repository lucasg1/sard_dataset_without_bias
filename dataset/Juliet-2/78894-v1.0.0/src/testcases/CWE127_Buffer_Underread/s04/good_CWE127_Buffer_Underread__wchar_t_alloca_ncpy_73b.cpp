using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> dataList);
void FUN1()
{
    wchar_t * data;
    list<wchar_t *> dataList;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> dataList)
{
    wchar_t * data = dataList.back();
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        wcsncpy(dest, data, wcslen(dest));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
} 
