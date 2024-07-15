namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
    }
    else
    {
        twoIntsStruct VAR1;
        data = &VAR1;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
<END>
        ; 
    }
    else
    {
        delete data;
    }
}
} 
