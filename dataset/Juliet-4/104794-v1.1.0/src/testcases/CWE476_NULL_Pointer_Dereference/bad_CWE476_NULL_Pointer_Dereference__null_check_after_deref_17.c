void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
