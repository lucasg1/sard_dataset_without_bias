void FUN0()
{
    int h;
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    for(h = 0; h < 1; h++)
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
        SNPRINTF(dest, wcslen(data), L"%s", data);
        printWLine(data);
        free(data);
    }
}
