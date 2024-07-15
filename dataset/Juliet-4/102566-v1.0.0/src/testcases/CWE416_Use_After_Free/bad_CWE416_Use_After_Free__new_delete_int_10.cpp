namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(globalTrue)
    {
<START>
        printIntLine(*data);
<END>
    }
}
} 
