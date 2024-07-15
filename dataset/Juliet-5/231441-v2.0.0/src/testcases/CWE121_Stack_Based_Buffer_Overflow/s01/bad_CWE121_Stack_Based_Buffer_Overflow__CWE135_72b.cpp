using namespace std;
namespace NAMESPACE0
{
void FUN2(vector<void *> dataVector);
void FUN1()
{
    void * data;
    vector<void *> dataVector;
    data = NULL;
    data = (void *)WIDE_STRING;
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
    data = (void *)WIDE_STRING;
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
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printLine((char *)dest);
    }
}
} 
