using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<wchar_t *> dataVector);
void FUN1()
{
    wchar_t * data;
    vector<wchar_t *> dataVector;
    wchar_t VAR1[50];
    wchar_t VAR2[100];
    data = VAR1;
    data[0] = L'\0'; 
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
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncpy(data, source, 100-1);
<END>
        data[100-1] = L'\0'; 
        printWLine(data);
    }
}
} 
