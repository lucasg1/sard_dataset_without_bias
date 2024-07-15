void FUN0()
{
    twoIntsStruct data;
    if(globalFive==5)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(globalFive==5)
    {
        printStructLine(&data);
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
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
    if(globalFive==5)
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
void FUN3()
{
    twoIntsStruct data;
    if(globalFive==5)
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
    if(globalFive==5)
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
