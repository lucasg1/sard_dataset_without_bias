void FUN0()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        free(data);
        break;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"A String");
        printWLine(data);
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"A String");
        printWLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
