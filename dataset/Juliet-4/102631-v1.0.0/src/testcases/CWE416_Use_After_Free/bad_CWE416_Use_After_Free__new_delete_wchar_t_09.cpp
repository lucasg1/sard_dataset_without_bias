namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        printWcharLine(*data);
<END>
    }
}
} 
