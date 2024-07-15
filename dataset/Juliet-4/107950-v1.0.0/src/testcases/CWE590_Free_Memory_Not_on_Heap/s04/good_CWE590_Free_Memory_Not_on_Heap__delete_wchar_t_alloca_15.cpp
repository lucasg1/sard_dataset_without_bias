namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t * dataBuffer = new wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    break;
    }
    printWcharLine(*data);
    delete data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        wchar_t * dataBuffer = new wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printWcharLine(*data);
    delete data;
}
} 
