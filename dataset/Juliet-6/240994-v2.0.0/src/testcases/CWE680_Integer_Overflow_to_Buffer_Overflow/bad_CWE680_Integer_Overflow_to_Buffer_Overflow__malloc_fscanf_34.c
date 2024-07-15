typedef union
{
    int unionFirst;
    int unionSecond;
} CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_34_unionType;
void FUN0()
{
    int data;
    CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_34_unionType myUnion;
    data = -1;
    fscanf(stdin, "%d", &data);
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
