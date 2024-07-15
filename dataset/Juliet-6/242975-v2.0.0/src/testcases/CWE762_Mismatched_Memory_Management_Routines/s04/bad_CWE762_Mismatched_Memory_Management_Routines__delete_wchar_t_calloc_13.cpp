namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (wchar_t *)calloc(100, sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        delete data;
<END>
    }
}
} 
