void FUN0()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            wcscpy(data, L"Initialize");
            printWLine(data);
            free(data);
        }
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
    if(1)
    {
        if (data != NULL)
        {
            wcscpy(data, L"Initialize");
            printWLine(data);
            free(data);
        }
    }
}
