void FUN0()
{
    if(5!=5)
    {
        printLine("Benign, fixed string");
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
void FUN1()
{
    if(5==5)
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
