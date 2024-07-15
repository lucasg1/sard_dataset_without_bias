void FUN0()
{
    switch(6)
    {
    case 6:
    {
<START>
        int *intPointer = NULL;
<END>
        if (intPointer == NULL)
        {
            printIntLine(*intPointer);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
