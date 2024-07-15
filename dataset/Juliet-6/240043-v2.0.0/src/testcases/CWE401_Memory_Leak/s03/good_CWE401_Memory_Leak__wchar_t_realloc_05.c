static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticTrue)
    {
        ; 
    }
}
