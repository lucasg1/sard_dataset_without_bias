namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = NULL;
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
<START>
        delete [] data;
<END>
    }
}
} 
