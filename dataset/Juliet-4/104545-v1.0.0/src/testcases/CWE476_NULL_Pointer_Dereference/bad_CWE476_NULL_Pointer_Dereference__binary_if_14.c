void FUN0()
{
    if(globalFive==5)
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
