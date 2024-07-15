void FUN0()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        printStructLine(&data);
        break;
    }
}
void FUN1()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    switch(6)
    {
    case 6:
        printStructLine(&data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
