void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            struct
            {
                char charFirst;
                int intSecond;
            } structCharInt;
            char *charPtr;
            structCharInt.charFirst = 1;
            charPtr = &structCharInt.charFirst;
<START>
            *(int*)(charPtr + sizeof(int)) = 5;
<END>
            printIntLine(structCharInt.charFirst);
            printIntLine(structCharInt.intSecond);
        }
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
