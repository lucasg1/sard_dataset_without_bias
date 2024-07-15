void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    free(data);
    FUN0(data);
}
void FUN0(wchar_t * data)
{
<START>
    free(data);
<END>
}
