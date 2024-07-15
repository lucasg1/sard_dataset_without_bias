namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        printWcharLine(*data);
<END>
    }
}
} 
