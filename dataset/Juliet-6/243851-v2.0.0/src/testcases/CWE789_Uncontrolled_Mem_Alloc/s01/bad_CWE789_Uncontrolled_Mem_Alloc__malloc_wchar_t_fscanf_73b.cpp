using namespace std;
namespace NAMESPACE0
{
void FUN0(list<size_t> dataList);
void FUN1()
{
    size_t data;
    list<size_t> dataList;
    data = 0;
    fscanf(stdin, "%zu", &data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<size_t> dataList)
{
    size_t data = dataList.back();
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
