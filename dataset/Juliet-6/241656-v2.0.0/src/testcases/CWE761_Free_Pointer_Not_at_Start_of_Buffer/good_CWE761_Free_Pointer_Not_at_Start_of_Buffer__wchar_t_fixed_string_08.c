static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0';
    wcscpy(data, BAD_SOURCE_FIXED_STRING);
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            size_t i;
            for (i=0; i < wcslen(data); i++)
            {
                if (data[i] == SEARCH_CHAR)
                {
                    printLine("We have a match!");
                    break;
                }
            }
            free(data);
        }
    }
}
void FUN3()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0';
    wcscpy(data, BAD_SOURCE_FIXED_STRING);
    if(FUN0())
    {
        {
            size_t i;
            for (i=0; i < wcslen(data); i++)
            {
                if (data[i] == SEARCH_CHAR)
                {
                    printLine("We have a match!");
                    break;
                }
            }
            free(data);
        }
    }
}
