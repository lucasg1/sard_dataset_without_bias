void FUN0()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
    if(globalReturnsTrueOrFalse())
    {
        if (data != NULL)
        {
            wcscpy(data, L"Initialize");
            printWLine(data);
            free(data);
        }
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
