void FUN0()
{
    if(globalTrue)
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
