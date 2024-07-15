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
    if(FUN0())
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(FUN0())
    {
        printStructLine(&data);
    }
}
void FUN4()
{
    twoIntsStruct data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
    if(FUN0())
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
void FUN5()
{
    twoIntsStruct data;
    if(FUN0())
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
    if(FUN0())
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
