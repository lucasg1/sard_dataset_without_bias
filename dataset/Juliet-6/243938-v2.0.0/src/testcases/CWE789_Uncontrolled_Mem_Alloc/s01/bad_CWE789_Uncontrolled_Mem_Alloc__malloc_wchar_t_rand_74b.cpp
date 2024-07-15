using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, size_t> dataMap);
void FUN1()
{
    size_t data;
    map<int, size_t> dataMap;
    data = 0;
    data = rand();
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, size_t> dataMap)
{
    size_t data = dataMap[2];
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
<START>
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
<END>
            if (myString == NULL) {exit(-1);}
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
} 
