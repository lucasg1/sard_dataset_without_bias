using namespace std;
namespace NAMESPACE0
{
void FUN5(vector<void *> dataVector);
void FUN6()
{
    void * data;
    vector<void *> dataVector;
    data = NULL;
    {
        char * VAR1 = (char *)malloc(50*sizeof(char));
        if (VAR1 == NULL) {exit(-1);}
        memset(VAR1, 'A', 50-1);
        VAR1[50-1] = '\0';
        data = (void *)VAR1;
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN5(dataVector);
}
void FUN7(vector<void *> dataVector);
void FUN8()
{
    void * data;
    vector<void *> dataVector;
    data = NULL;
    {
        wchar_t * VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR2 == NULL) {exit(-1);}
        wmemset(VAR2, L'A', 50-1);
        VAR2[50-1] = L'\0';
        data = (void *)VAR2;
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN7(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN5(vector<void *> dataVector);
void FUN6()
{
    void * data;
    vector<void *> dataVector;
    data = NULL;
    {
        char * VAR1 = (char *)malloc(50*sizeof(char));
        if (VAR1 == NULL) {exit(-1);}
        memset(VAR1, 'A', 50-1);
        VAR1[50-1] = '\0';
        data = (void *)VAR1;
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN5(dataVector);
}
void FUN7(vector<void *> dataVector);
void FUN8()
{
    void * data;
    vector<void *> dataVector;
    data = NULL;
    {
        wchar_t * VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR2 == NULL) {exit(-1);}
        wmemset(VAR2, L'A', 50-1);
        VAR2[50-1] = L'\0';
        data = (void *)VAR2;
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN7(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN5(vector<void *> dataVector)
{
    void * data = dataVector[2];
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, 1);
        if (dest == NULL) {exit(-1);}
        (void)strcpy((char *)dest, (char *)data);
        printLine((char *)dest);
        free(dest);
    }
}
void FUN7(vector<void *> dataVector)
{
    void * data = dataVector[2];
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printWLine((wchar_t *)dest);
        free(dest);
    }
}
} 
