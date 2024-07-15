static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(wchar_t * data)
{
    if(VAR0)
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
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(wchar_t * data)
{
    if(VAR1)
    {
        free(data);
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(wchar_t * data)
{
    if(VAR2)
    {
        ; 
    }
}
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    VAR2 = 1; 
    FUN4(data);
}
