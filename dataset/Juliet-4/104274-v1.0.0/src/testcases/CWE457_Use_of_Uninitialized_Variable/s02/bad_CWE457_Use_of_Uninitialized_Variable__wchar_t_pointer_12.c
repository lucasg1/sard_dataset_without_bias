void FUN0()
{
    wchar_t * data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        data = L"string";
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printWLine(data);
<END>
    }
    else
    {
        data = L"string";
        printWLine(data);
    }
}
