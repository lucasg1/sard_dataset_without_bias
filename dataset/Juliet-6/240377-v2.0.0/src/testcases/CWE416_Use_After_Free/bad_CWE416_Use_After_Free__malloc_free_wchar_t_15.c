void FUN0()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printWLine(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
