void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            twoIntsStruct *twoIntsStructPointer = NULL;
<START>
            if ((twoIntsStructPointer != NULL) & (twoIntsStructPointer->intOne == 5))
<END>
            {
                printLine("intOne == 5");
            }
        }
    }
}
