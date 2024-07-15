namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
