void FUN0()
{
    goto sink;
sink:
    {
        int *intPointer = NULL;
        intPointer = (int *)malloc(sizeof(int));
        *intPointer = 5;
        printIntLine(*intPointer);
        *intPointer = 10;
        printIntLine(*intPointer);
    }
}
