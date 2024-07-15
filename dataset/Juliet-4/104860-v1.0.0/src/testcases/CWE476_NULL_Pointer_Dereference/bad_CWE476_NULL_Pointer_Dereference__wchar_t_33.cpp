namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    {
        wchar_t * data = dataRef;
<START>
        printWcharLine(data[0]);
<END>
    }
}
} 
