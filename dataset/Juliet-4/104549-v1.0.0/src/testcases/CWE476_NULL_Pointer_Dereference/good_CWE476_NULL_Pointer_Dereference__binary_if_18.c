void FUN0()
{
    goto sink;
sink:
    {
        twoIntsStruct *twoIntsStructPointer = NULL;
        if ((twoIntsStructPointer != NULL) && (twoIntsStructPointer->intOne == 5))
        {
            printLine("intOne == 5");
        }
    }
}
