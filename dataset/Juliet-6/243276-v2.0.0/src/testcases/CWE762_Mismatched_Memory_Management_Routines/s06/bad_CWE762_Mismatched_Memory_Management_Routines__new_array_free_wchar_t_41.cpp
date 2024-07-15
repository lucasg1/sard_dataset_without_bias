namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    FUN0(data);
}
} 
