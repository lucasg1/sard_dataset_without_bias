namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t[100];
        break;
    }
    while(1)
    {
<START>
        delete data;
<END>
        break;
    }
}
} 
