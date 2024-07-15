void FUN0()
{
    if(1)
    {
        {
            wchar_t * * pointer = (wchar_t * *)ALLOCA(sizeof(wchar_t *));
<START>
            wchar_t * data = *pointer; 
<END>
            printWLine(data);
        }
    }
}
