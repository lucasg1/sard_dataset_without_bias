void FUN0()
{
    twoIntsStruct data;
    switch(6)
    {
    case 6:
        data.intOne = 0;
        data.intTwo = 0;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
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
    switch(6)
    {
    case 6:
        data.intOne = 0;
        data.intTwo = 0;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printStructLine(&data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    twoIntsStruct data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
        break;
    }
    switch(7)
    {
    case 7:
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    twoIntsStruct data;
    switch(6)
    {
    case 6:
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
