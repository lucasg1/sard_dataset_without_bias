namespace NAMESPACE0
{
void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
