using namespace std;
namespace NAMESPACE0
{
void FUN5(map<int, void *> dataMap);
void FUN6()
{
    void * data;
    map<int, void *> dataMap;
    data = NULL;
    data = (void *)CHAR_STRING;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN5(dataMap);
}
void FUN7(map<int, void *> dataMap);
void FUN8()
{
    void * data;
    map<int, void *> dataMap;
    data = NULL;
    data = (void *)WIDE_STRING;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN7(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN5(map<int, void *> dataMap);
void FUN6()
{
    void * data;
    map<int, void *> dataMap;
    data = NULL;
    data = (void *)CHAR_STRING;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN5(dataMap);
}
void FUN7(map<int, void *> dataMap);
void FUN8()
{
    void * data;
    map<int, void *> dataMap;
    data = NULL;
    data = (void *)WIDE_STRING;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN7(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN5(map<int, void *> dataMap)
{
    void * data = dataMap[2];
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy((char *)dest, (char *)data);
        printLine((char *)dest);
    }
}
void FUN7(map<int, void *> dataMap)
{
    void * data = dataMap[2];
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printWLine((wchar_t *)dest);
    }
}
} 
