using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> dataList);
void FUN1()
{
    wchar_t * data;
    list<wchar_t *> dataList;
    data = NULL;
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
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
<START>
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
<END>
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}
} 
