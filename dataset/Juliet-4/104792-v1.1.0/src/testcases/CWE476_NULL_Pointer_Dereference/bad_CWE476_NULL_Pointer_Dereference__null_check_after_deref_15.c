void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int *intPointer = NULL;
        intPointer = (int *)malloc(sizeof(int));
        *intPointer = 5;
        printIntLine(*intPointer);
<START>
        if (intPointer != NULL)
<END>
        {
            *intPointer = 10;
        }
        printIntLine(*intPointer);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
