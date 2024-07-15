void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
            printWLine(data);
        }
    }
    else
    {
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"a string");
        printWLine(data);
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
<END>
        ; 
    }
    else
    {
        free(data);
    }
}
