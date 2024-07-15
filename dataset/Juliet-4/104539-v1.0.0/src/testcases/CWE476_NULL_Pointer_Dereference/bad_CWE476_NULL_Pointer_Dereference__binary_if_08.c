static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
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
