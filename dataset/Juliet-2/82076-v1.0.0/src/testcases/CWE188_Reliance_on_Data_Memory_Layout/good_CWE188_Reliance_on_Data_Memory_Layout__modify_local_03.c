void FUN0()
{
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(5==5)
    {
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
    }
}
