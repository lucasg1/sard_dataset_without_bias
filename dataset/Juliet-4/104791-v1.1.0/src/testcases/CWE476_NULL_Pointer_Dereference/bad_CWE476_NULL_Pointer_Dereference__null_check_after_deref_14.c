void FUN0()
{
    if(globalFive==5)
    {
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
    }
}
