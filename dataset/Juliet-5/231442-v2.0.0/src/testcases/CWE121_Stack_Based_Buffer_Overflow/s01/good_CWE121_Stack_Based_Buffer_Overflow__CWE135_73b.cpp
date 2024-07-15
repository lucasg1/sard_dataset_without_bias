using namespace std;
namespace NAMESPACE0
{
void FUN0(list<void *> dataList);
void FUN1()
{
    void * data;
    list<void *> dataList;
    data = NULL;
    data = (void *)CHAR_STRING;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<void *> dataList);
void FUN3()
{
    void * data;
    list<void *> dataList;
    data = NULL;
    data = (void *)WIDE_STRING;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<void *> dataList);
void FUN1()
{
    void * data;
    list<void *> dataList;
    data = NULL;
    data = (void *)CHAR_STRING;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<void *> dataList);
void FUN3()
{
    void * data;
    list<void *> dataList;
    data = NULL;
    data = (void *)WIDE_STRING;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<void *> dataList)
{
    void * data = dataList.back();
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy((char *)dest, (char *)data);
        printLine((char *)dest);
    }
}
void FUN2(list<void *> dataList)
{
    void * data = dataList.back();
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printWLine((wchar_t *)dest);
    }
}
} 
