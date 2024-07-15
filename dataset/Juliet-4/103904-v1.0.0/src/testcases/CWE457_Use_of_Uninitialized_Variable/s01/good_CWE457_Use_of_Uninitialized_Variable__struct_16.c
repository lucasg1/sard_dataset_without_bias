void FUN0()
{
    twoIntsStruct data;
    while(1)
    {
        ; 
        break;
    }
    while(1)
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
        break;
    }
}
void FUN1()
{
    twoIntsStruct data;
    while(1)
    {
        data.intOne = 1;
        data.intTwo = 2;
        break;
    }
    while(1)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
        break;
    }
}
