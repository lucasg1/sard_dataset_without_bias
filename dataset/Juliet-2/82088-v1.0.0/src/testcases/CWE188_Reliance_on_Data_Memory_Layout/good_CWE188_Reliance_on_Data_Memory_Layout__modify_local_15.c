void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        struct
        {
            char charFirst;
            int intSecond;
        } structCharInt;
        structCharInt.charFirst = 1;
        structCharInt.intSecond = 5;
        printIntLine(structCharInt.charFirst);
        printIntLine(structCharInt.intSecond);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        struct
        {
            char charFirst;
            int intSecond;
        } structCharInt;
        structCharInt.charFirst = 1;
        structCharInt.intSecond = 5;
        printIntLine(structCharInt.charFirst);
        printIntLine(structCharInt.intSecond);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
