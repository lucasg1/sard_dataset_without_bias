void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
