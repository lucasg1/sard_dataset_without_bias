void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    goto sink;
sink:
<START>
<END>
    ; 
}
