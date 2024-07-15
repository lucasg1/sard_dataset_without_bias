namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new wchar_t[100];
        data[0] = L'\0'; 
    }
    else
    {
        data = new wchar_t[100];
        data[0] = L'\0'; 
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscpy(data, source);
        printWLine(data);
        delete [] data;
    }
}
} 
