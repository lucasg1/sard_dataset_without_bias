int VAR0 = 0;
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(twoIntsStruct * data)
{
    if(VAR0)
    {
<START>
        printIntLine(data->intOne);
<END>
    }
}
