void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    {
        wchar_t * data = *dataPtr1;
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t dest[50] = L"";
<START>
            wcscpy(dest, data);
<END>
            printWLine(data);
            free(data);
        }
    }
}
