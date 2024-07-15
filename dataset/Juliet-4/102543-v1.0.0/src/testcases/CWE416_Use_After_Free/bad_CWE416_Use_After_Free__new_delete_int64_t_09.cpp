namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        printLongLongLine(*data);
<END>
    }
}
} 
