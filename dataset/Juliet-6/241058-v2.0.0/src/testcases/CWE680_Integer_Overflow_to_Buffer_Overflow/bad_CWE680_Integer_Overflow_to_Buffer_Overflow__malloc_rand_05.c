static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = -1;
    if(staticTrue)
    {
        data = RAND32();
    }
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
