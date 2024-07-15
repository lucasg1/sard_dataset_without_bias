namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    if(globalTrue)
    {
        data = NULL;
    }
    if(globalTrue)
    {
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
}
} 
