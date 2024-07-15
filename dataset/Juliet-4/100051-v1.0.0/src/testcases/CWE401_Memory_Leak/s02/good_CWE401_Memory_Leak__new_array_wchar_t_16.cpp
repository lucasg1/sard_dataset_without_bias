namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t[100];
        wcscpy(data, L"A String");
        printWLine(data);
        break;
    }
    while(1)
    {
        delete[] data;
        break;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        wchar_t VAR1[100];
        data = VAR1;
        wcscpy(data, L"A String");
        printWLine(data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
