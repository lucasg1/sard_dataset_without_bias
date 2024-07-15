namespace NAMESPACE0
{
void FUN0(wchar_t * dataArray[]);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    data = NULL;
    wchar_t VAR1[100];
    data = VAR1;
    wcscpy(data, L"A String");
    printWLine(data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(wchar_t * dataArray[]);
void FUN3()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    data = NULL;
    data = new wchar_t[100];
    wcscpy(data, L"A String");
    printWLine(data);
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    ; 
}
void FUN2(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    delete[] data;
}
} 
