void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t * data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wchar_t * tmpData;
        wcscpy(data, L"A String");
        printWLine(data);
        tmpData = (wchar_t *)realloc(data, (130000)*sizeof(wchar_t));
        if (tmpData != NULL)
        {
            data = tmpData;
            wcscpy(data, L"New String");
            printWLine(data);
        }
        free(data);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wchar_t * tmpData;
        wcscpy(data, L"A String");
        printWLine(data);
        tmpData = (wchar_t *)realloc(data, (130000)*sizeof(wchar_t));
        if (tmpData != NULL)
        {
            data = tmpData;
            wcscpy(data, L"New String");
            printWLine(data);
        }
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
