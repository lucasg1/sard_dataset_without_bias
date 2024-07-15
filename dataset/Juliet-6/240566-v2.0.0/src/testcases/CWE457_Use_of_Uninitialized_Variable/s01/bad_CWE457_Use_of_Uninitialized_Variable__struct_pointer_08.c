static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    twoIntsStruct * data;
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
    {
<START>
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
<END>
    }
}
