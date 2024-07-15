namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(TwoIntsClass * data)
{
    if(VAR1)
    {
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    VAR1 = 1; 
    FUN0(data);
}
} 
