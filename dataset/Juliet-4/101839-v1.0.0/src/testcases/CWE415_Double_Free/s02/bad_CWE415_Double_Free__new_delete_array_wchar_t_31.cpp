namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    delete [] data;
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
<START>
        delete [] data;
<END>
    }
}
} 
