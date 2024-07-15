using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<wchar_t *> dataVector);
void FUN1()
{
    wchar_t * data;
    vector<wchar_t *> dataVector;
    wchar_t VAR1[10];
    wchar_t VAR2[10+1];
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
        wchar_t source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
        printWLine(data);
    }
}
} 
