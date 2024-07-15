namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL; 
    {
        static wchar_t dataBuffer;
        dataBuffer = L'A';
        data = &dataBuffer;
    }
    {
        wchar_t * data = dataRef;
        printWcharLine(*data);
<START>
        delete data;
<END>
    }
}
} 
