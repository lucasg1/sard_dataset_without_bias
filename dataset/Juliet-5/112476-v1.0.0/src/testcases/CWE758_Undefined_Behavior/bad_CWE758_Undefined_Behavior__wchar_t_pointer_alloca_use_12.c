void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t * * pointer = (wchar_t * *)ALLOCA(sizeof(wchar_t *));
<START>
            wchar_t * data = *pointer; 
<END>
            printWLine(data);
        }
    }
    else
    {
        {
            wchar_t * data;
            wchar_t * * pointer = (wchar_t * *)ALLOCA(sizeof(wchar_t *));
            data = L"string";
            *pointer = data; 
            {
                wchar_t * data = *pointer;
                printWLine(data);
            }
        }
    }
}
