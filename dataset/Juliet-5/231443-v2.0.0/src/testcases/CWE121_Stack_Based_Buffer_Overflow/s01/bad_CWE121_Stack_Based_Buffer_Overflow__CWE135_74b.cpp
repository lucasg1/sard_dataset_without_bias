using namespace std;
namespace NAMESPACE0
{
void FUN2(map<int, void *> dataMap);
void FUN1()
{
    void * data;
    map<int, void *> dataMap;
    data = NULL;
    data = (void *)WIDE_STRING;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(map<int, void *> dataMap);
void FUN3()
{
    void * data;
    map<int, void *> dataMap;
    data = NULL;
    data = (void *)WIDE_STRING;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(map<int, void *> dataMap)
{
    void * data = dataMap[2];
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printLine((char *)dest);
    }
}
} 
