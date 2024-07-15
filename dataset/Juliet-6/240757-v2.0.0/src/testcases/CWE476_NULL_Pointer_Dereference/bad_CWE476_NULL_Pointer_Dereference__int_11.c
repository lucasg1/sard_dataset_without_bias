void FUN0()
{
    int * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
    {
<START>
        printIntLine(*data);
<END>
    }
}
