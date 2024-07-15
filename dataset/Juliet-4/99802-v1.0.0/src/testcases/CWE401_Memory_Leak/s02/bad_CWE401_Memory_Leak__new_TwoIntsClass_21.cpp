namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(TwoIntsClass * data)
{
    if(VAR1)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    VAR1 = 1; 
    FUN0(data);
}
} 
