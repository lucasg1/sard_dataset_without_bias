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
    data = new wchar_t[100];
    VAR1 = 1; 
    FUN0(data);
}
} 
