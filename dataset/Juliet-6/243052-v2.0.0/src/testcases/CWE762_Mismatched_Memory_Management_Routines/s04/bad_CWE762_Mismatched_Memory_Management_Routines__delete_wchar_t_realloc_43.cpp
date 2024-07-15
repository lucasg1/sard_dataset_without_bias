namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
<START>
    delete data;
<END>
}
} 
