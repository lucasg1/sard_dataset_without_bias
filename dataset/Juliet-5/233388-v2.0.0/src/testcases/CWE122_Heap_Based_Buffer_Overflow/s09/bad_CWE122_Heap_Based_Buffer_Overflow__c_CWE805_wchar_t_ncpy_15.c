void FUN0()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        data[0] = L'\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncpy(data, source, 100-1);
<END>
        data[100-1] = L'\0'; 
        printWLine(data);
        free(data);
    }
}
