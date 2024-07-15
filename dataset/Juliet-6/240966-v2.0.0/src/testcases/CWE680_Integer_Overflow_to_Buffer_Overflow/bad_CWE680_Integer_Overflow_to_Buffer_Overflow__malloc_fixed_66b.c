void FUN0(int dataArray[]);
void FUN1()
{
    int data;
    int dataArray[5];
    data = -1;
    data = INT_MAX / 2 + 2; 
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int dataArray[])
{
    int data = dataArray[2];
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
