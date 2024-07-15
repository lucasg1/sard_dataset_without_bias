void FUN0()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    if(5!=5)
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
    if(5==5)
    {
        printStructLine(&data);
    }
}
