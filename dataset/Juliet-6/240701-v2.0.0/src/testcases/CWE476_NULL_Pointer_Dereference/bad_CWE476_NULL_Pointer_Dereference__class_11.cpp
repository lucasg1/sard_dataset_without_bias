namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
    {
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
}
} 
