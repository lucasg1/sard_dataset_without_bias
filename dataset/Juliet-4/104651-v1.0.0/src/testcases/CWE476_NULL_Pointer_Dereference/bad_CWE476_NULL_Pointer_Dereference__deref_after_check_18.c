void FUN0()
{
    goto sink;
sink:
    {
<START>
        int *intPointer = NULL;
<END>
        if (intPointer == NULL)
        {
            printIntLine(*intPointer);
        }
    }
}
