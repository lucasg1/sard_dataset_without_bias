void FUN0()
{
    if(globalReturnsTrue())
    {
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
}
