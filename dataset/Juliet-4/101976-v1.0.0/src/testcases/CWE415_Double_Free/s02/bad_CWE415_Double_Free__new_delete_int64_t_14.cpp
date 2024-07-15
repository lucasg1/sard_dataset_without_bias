namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new int64_t;
        delete data;
    }
    if(globalFive==5)
    {
<START>
        delete data;
<END>
    }
}
} 
