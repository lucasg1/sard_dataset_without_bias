namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t;
        break;
    }
    while(1)
    {
<START>
        free(data);
<END>
        break;
    }
}
} 
