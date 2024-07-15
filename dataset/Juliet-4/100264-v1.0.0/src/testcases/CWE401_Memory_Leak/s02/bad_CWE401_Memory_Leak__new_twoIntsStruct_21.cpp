namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(twoIntsStruct * data)
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
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    VAR1 = 1; 
    FUN0(data);
}
} 
