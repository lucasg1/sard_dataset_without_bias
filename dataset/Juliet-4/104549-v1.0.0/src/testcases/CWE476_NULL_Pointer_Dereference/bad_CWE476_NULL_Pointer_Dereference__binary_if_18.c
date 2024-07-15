void FUN0()
{
    goto sink;
sink:
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
