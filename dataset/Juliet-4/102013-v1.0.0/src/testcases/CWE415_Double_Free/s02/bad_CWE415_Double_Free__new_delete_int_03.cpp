namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        data = new int;
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
