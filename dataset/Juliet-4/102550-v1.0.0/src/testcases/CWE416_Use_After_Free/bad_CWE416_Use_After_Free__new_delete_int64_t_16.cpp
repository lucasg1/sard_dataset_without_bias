namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
        break;
    }
    while(1)
    {
<START>
        printLongLongLine(*data);
<END>
        break;
    }
}
} 
