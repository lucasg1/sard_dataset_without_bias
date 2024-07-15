void FUN0(int data)
{
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
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = 20;
    funcPtr(data);
}
