void FUN0()
{
    twoIntsStruct data;
    if(globalReturnsTrue())
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(globalReturnsTrue())
    {
        printStructLine(&data);
    }
}
void FUN2()
{
    twoIntsStruct data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
    if(globalReturnsTrue())
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
void FUN3()
{
    twoIntsStruct data;
    if(globalReturnsTrue())
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
    if(globalReturnsTrue())
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
