void FUN0()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
    {
<START>
        printWcharLine(data[0]);
<END>
    }
}
