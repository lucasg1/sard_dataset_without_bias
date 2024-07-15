void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}
