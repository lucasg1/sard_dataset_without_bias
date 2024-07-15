namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        printLongLine(*data);
<END>
    }
}
} 
