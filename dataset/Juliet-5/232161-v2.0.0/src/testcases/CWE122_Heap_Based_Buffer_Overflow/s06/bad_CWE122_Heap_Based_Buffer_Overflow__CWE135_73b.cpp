using namespace std;
namespace NAMESPACE0
{
void FUN2(list<void *> dataList);
void FUN1()
{
    void * data;
    list<void *> dataList;
    data = NULL;
    {
        wchar_t * VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR1 == NULL) {exit(-1);}
        wmemset(VAR1, L'A', 50-1);
        VAR1[50-1] = L'\0';
        data = (void *)VAR1;
    }
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(list<void *> dataList);
void FUN3()
{
    void * data;
    list<void *> dataList;
    data = NULL;
    {
        wchar_t * VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR1 == NULL) {exit(-1);}
        wmemset(VAR1, L'A', 50-1);
        VAR1[50-1] = L'\0';
        data = (void *)VAR1;
    }
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(list<void *> dataList)
{
    void * data = dataList.back();
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
<START>
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
<END>
        printLine((char *)dest);
        free(dest);
    }
}
} 
