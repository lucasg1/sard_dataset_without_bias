using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<wchar_t *> dataVector);
void FUN1()
{
    wchar_t * data;
    vector<wchar_t *> dataVector;
    data = NULL;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer;
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<wchar_t *> dataVector)
{
    wchar_t * data = dataVector[2];
    {
        wchar_t dest[100*2];
        wmemset(dest, L'C', 100*2-1); 
        dest[100*2-1] = L'\0'; 
        wcscpy(dest, data);
        printWLine(dest);
    }
}
} 