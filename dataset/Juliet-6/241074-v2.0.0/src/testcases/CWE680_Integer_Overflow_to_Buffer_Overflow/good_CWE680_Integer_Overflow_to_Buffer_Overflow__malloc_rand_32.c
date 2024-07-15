void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = -1;
    {
        int data = *dataPtr1;
        data = 20;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
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
}
