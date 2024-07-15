namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(globalReturnsTrue())
    {
<START>
        printIntLine(*data);
<END>
    }
}
} 
