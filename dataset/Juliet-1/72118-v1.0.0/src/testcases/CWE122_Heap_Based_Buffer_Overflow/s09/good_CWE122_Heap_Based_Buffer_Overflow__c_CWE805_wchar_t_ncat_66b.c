void FUN0(wchar_t * dataArray[]);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    data[0] = L'\0'; 
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcsncat(data, source, 100);
        printWLine(data);
        free(data);
    }
}
