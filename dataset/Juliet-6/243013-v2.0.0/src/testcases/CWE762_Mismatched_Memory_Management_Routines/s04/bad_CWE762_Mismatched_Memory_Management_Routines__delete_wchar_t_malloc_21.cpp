namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(wchar_t * data)
{
    if(VAR1)
    {
<START>
        delete data;
<END>
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    VAR1 = 1; 
    FUN0(data);
}
} 
