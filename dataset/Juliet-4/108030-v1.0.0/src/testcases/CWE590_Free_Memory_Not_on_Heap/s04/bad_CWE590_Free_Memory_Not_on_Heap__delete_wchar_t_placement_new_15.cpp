namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        char buffer[sizeof(wchar_t)];
        wchar_t * dataBuffer = new(buffer) wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
