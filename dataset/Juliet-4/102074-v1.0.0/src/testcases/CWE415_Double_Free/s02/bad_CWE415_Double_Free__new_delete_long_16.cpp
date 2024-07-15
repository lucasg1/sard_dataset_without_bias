namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    while(1)
    {
        data = new long;
        delete data;
        break;
    }
    while(1)
    {
<START>
        delete data;
<END>
        break;
    }
}
} 
