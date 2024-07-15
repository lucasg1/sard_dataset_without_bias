void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            wchar_t * data = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (data == NULL) {exit(-1);}
            wcscpy(data, L"A String");
            printWLine(data);
<START>
            data = (wchar_t *)realloc(data, (130000)*sizeof(wchar_t));
<END>
            if (data != NULL)
            {
                wcscpy(data, L"New String");
                printWLine(data);
                free(data);
            }
        }
    }
}
