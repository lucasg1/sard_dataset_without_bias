using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> dataList);
void FUN1()
{
    wchar_t * data;
    list<wchar_t *> dataList;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<wchar_t *> dataList);
void FUN3()
{
    wchar_t * data;
    list<wchar_t *> dataList;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    free(data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> dataList)
{
    wchar_t * data = dataList.back();
    free(data);
}
void FUN2(list<wchar_t *> dataList)
{
    wchar_t * data = dataList.back();
    ; 
}
} 
