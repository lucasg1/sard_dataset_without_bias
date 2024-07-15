void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(1)
    {
        free(data);
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(1)
    {
        ; 
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(1)
    {
        ; 
    }
}
