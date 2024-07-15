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
        wchar_t dataBuffer;
        dataBuffer = L'A';
        data = &dataBuffer;
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
