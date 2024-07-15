void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
            printWLine(data);
        }
    }
    if(globalTrue)
    {
<START>
<END>
        ; 
    }
}
