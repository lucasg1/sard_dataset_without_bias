namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
<START>
        delete [] data;
<END>
    }
}
} 
