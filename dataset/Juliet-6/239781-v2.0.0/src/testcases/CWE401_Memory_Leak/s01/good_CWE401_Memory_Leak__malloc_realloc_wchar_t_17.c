void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
