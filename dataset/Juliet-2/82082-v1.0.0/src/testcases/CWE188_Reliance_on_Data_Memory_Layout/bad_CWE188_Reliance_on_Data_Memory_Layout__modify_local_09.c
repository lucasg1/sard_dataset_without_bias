void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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