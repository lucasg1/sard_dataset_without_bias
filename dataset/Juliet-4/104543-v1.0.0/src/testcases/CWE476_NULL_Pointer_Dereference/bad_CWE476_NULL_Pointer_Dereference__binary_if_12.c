void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
    else
    {
        {
            twoIntsStruct *twoIntsStructPointer = NULL;
            if ((twoIntsStructPointer != NULL) && (twoIntsStructPointer->intOne == 5))
            {
                printLine("intOne == 5");
            }
        }
    }
}
