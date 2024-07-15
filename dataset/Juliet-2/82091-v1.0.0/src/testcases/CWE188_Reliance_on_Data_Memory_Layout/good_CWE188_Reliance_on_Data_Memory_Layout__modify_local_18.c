void FUN0()
{
    goto sink;
sink:
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
