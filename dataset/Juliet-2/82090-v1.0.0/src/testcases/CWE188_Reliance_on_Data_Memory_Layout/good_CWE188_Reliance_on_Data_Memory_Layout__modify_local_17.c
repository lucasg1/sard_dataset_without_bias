void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
