namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new long;
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
