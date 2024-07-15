namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalFive==5)
    {
<START>
        printWcharLine(*data);
<END>
    }
}
} 
