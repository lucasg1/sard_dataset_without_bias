namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(5==5)
    {
        data = new long;
        delete data;
    }
    if(5==5)
    {
<START>
        delete data;
<END>
    }
}
} 
