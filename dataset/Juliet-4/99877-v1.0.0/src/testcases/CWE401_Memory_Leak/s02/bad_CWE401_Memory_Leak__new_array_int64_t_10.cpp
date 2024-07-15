namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int64_t[100];
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalTrue)
    {
<START>
<END>
        ; 
    }
}
} 
