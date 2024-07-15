void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        data = INT_MAX / 2 + 2; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
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
