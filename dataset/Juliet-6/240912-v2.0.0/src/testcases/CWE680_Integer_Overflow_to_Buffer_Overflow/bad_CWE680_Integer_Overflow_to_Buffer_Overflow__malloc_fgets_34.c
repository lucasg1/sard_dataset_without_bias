typedef union
{
    int unionFirst;
    int unionSecond;
} CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_34_unionType;
void FUN0()
{
    int data;
    CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_34_unionType myUnion;
    data = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
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
