namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    while(1)
    {
        {
            char buffer[sizeof(wchar_t)];
            wchar_t * dataBuffer = new(buffer) wchar_t;
            *dataBuffer = L'A';
            data = dataBuffer;
        }
        break;
    }
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
