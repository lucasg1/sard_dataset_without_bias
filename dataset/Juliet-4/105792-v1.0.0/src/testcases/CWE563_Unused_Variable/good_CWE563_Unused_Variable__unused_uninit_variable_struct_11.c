void FUN0()
{
    twoIntsStruct data;
    ; 
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
}
void FUN1()
{
    twoIntsStruct data;
    ; 
    if(globalReturnsTrue())
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
}
