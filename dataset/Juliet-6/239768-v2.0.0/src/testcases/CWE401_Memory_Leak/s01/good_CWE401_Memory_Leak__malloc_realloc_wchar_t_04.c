static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
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
    }
}
