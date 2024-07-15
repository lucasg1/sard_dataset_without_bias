namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(1)
    {
<START>
        printIntLine(*data);
<END>
    }
}
} 
