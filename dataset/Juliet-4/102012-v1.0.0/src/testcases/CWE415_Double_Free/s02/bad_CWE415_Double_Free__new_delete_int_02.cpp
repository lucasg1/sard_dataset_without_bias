namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = new int;
        delete data;
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 
