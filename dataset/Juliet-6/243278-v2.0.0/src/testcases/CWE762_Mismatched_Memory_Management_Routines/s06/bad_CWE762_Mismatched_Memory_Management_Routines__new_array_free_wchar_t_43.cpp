namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t[100];
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
<START>
    free(data);
<END>
}
} 
