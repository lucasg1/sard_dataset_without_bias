void FUN0()
{
    switch(6)
    {
    case 6:
    {
        twoIntsStruct *twoIntsStructPointer = NULL;
<START>
        if ((twoIntsStructPointer != NULL) & (twoIntsStructPointer->intOne == 5))
<END>
        {
            printLine("intOne == 5");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
