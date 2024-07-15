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
    twoIntsStruct data;
    if(FUN0())
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(FUN0())
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
    }
}
