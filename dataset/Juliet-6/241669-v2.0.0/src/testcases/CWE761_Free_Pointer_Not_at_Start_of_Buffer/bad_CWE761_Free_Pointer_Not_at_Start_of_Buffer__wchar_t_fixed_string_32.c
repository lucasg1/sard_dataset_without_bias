void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0';
    {
        wchar_t * data = *dataPtr1;
        wcscpy(data, BAD_SOURCE_FIXED_STRING);
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
<START>
        for (; *data != L'\0'; data++)
<END>
        {
            if (*data == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
}
