namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    wchar_t VAR1[100];
    data = VAR1;
    wcscpy(data, L"A String");
    printWLine(data);
    {
        wchar_t * data = dataRef;
        ; 
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = new wchar_t[100];
    wcscpy(data, L"A String");
    printWLine(data);
    {
        wchar_t * data = dataRef;
        delete[] data;
    }
}
} 
