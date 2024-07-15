namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
} 
