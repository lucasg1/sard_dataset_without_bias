namespace NAMESPACE0
{
void FUN0(wchar_t * dataArray[]);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
<START>
    delete [] data;
<END>
}
} 
