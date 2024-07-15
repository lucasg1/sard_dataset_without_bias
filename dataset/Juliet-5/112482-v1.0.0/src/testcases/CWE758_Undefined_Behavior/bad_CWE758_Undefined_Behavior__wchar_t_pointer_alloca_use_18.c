void FUN0()
{
    goto sink;
sink:
    {
        wchar_t * * pointer = (wchar_t * *)ALLOCA(sizeof(wchar_t *));
<START>
        wchar_t * data = *pointer; 
<END>
        printWLine(data);
    }
}
