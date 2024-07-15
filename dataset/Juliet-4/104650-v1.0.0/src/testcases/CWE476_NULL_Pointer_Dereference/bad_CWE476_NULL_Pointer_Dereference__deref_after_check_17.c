void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
