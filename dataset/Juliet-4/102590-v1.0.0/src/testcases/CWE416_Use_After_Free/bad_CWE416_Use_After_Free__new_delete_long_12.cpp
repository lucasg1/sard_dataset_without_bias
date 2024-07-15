namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printLongLine(*data);
<END>
    }
    else
    {
        ; 
    }
}
} 
