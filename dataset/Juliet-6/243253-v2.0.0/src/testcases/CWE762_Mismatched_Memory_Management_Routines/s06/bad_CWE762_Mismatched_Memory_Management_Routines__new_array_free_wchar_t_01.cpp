namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
<START>
    free(data);
<END>
}
} 
