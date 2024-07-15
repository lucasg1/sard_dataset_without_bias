void FUN0()
{
    goto sink;
sink:
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
