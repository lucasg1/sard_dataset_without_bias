static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(twoIntsStruct data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printStructLine(&data);
    }
}
void FUN1()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(twoIntsStruct data)
{
    if(VAR1)
    {
        printStructLine(&data);
    }
}
void FUN3()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(twoIntsStruct data)
{
    if(VAR2)
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
void FUN5()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
    VAR2 = 1; 
    FUN4(data);
}
