using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<wchar_t *> dataVector);
void FUN1()
{
    wchar_t * data;
    vector<wchar_t *> dataVector;
    wchar_t * VAR1 = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * VAR2 = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
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
        wcsncpy(data, source, wcslen(source) + 1);
<END>
        printWLine(data);
    }
}
} 
