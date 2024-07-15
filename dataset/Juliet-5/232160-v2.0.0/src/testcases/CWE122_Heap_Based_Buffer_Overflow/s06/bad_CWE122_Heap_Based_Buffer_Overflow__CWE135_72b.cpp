using namespace std;
namespace NAMESPACE0
{
void FUN2(vector<void *> dataVector);
void FUN1()
{
    void * data;
    vector<void *> dataVector;
    data = NULL;
    {
        wchar_t * VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR1 == NULL) {exit(-1);}
        wmemset(VAR1, L'A', 50-1);
        VAR1[50-1] = L'\0';
        data = (void *)VAR1;
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(vector<void *> dataVector);
void FUN3()
{
    void * data;
    vector<void *> dataVector;
    data = NULL;
    {
        wchar_t * VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR1 == NULL) {exit(-1);}
        wmemset(VAR1, L'A', 50-1);
        VAR1[50-1] = L'\0';
        data = (void *)VAR1;
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(vector<void *> dataVector)
{
    void * data = dataVector[2];
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printLine((char *)dest);
        free(dest);
    }
}
} 
