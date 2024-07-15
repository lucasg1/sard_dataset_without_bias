void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = NULL; 
    {
        wchar_t * data = *dataPtr1;
        data = (wchar_t *)calloc(20, sizeof(wchar_t));
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        if (data != NULL)
        {
            wcscpy(data, L"Initialize");
            printWLine(data);
            free(data);
        }
    }
}
