void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    data = 20;
    {
        size_t i;
        int *intPointer;
        intPointer = (int*)malloc(data * sizeof(int));
        if (intPointer == NULL) {exit(-1);}
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        free(intPointer);
    }
}
