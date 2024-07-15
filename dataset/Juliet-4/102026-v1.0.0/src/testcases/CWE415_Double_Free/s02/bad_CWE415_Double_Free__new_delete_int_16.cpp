namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = new int;
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
