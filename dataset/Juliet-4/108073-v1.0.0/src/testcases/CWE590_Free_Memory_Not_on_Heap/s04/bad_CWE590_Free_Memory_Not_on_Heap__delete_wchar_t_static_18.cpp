namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    goto source;
source:
    {
        static wchar_t dataBuffer;
        dataBuffer = L'A';
        data = &dataBuffer;
    }
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
