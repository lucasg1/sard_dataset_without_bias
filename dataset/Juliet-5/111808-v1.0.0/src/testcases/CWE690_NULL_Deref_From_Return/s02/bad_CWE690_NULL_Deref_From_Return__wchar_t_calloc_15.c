void FUN0()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)calloc(20, sizeof(wchar_t));
    switch(6)
    {
    case 6:
<START>
        wcscpy(data, L"Initialize");
<END>
        printWLine(data);
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
