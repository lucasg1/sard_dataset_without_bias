namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = RAND32();
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
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
} 
