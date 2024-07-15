using namespace std;
namespace NAMESPACE0
{
void FUN5(vector<void *> dataVector);
void FUN6()
{
    void * data;
    vector<void *> dataVector;
    data = NULL;
    data = (void *)CHAR_STRING;
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
    data = (void *)WIDE_STRING;
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
    data = (void *)CHAR_STRING;
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
    data = (void *)WIDE_STRING;
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
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy((char *)dest, (char *)data);
        printLine((char *)dest);
    }
}
void FUN7(vector<void *> dataVector)
{
    void * data = dataVector[2];
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printWLine((wchar_t *)dest);
    }
}
} 
