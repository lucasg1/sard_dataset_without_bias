static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
