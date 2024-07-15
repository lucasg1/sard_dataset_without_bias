void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
}
