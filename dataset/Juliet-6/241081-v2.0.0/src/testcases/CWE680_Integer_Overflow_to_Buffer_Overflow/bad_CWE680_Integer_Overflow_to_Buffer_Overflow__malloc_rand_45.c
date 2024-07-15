static int VAR0;
static int VAR1;
void FUN0()
{
    int data = VAR0;
    {
        size_t i;
        int *intPointer;
        intPointer = (int*)malloc(data * sizeof(int));
        if (intPointer == NULL) {exit(-1);}
        for (i = 0; i < (size_t)data; i++)
        {
<START>
            intPointer[i] = 0; 
<END>
        }
        printIntLine(intPointer[0]);
        free(intPointer);
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    VAR0 = data;
    FUN0();
}
