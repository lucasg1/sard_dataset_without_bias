namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    ; 
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    wchar_t VAR1[100];
    data = VAR1;
    wcscpy(data, L"A String");
    printWLine(data);
    FUN0(data);
}
void FUN2(wchar_t * data)
{
    delete[] data;
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wcscpy(data, L"A String");
    printWLine(data);
    FUN2(data);
}
} 
