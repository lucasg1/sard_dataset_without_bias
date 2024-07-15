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
    data.intOne = 0;
    data.intTwo = 0;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printStructLine(&data);
    }
}
void FUN3()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    if(FUN0())
    {
        printStructLine(&data);
    }
}
