void FUN0()
{
    twoIntsStruct data;
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN1()
{
    twoIntsStruct data;
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive==5)
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN2()
{
    twoIntsStruct data;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalFive==5)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN3()
{
    twoIntsStruct data;
    if(globalFive==5)
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalFive==5)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
