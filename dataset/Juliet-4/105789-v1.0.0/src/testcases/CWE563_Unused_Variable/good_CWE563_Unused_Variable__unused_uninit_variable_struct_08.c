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
    ; 
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
}
void FUN3()
{
    twoIntsStruct data;
    ; 
    if(FUN0())
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
}
