namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = new wchar_t;
    {
        wchar_t * data = dataRef;
<START>
        delete [] data;
<END>
    }
}
} 
