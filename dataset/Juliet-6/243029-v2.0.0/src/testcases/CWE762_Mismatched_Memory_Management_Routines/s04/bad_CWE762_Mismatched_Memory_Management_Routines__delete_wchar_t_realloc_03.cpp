namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(5==5)
    {
        data = NULL;
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(5==5)
    {
<START>
        delete data;
<END>
    }
}
} 
