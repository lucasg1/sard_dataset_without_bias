void FUN0()
{
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
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
