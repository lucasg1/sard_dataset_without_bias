namespace NAMESPACE0
{
void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * data;
            data = L"string";
            wchar_t * * pointer = new wchar_t *;
            *pointer = data; 
            {
                wchar_t * data = *pointer;
                printWLine(data);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(globalTrue)
    {
        {
            wchar_t * data;
            data = L"string";
            wchar_t * * pointer = new wchar_t *;
            *pointer = data; 
            {
                wchar_t * data = *pointer;
                printWLine(data);
            }
            delete pointer;
        }
    }
}
} 
