void FUN0()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
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
    data.intOne = 0;
    data.intTwo = 0;
    if(globalReturnsTrue())
    {
        printStructLine(&data);
    }
}
