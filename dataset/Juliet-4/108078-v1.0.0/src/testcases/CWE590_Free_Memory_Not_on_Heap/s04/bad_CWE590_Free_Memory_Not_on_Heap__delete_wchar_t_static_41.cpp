namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    printWcharLine(*data);
<START>
    delete data;
<END>
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    {
        static wchar_t dataBuffer;
        dataBuffer = L'A';
        data = &dataBuffer;
    }
    FUN0(data);
}
} 
