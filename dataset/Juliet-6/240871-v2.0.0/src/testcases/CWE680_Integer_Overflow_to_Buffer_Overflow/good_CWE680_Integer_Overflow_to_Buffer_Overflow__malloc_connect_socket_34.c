typedef union
{
    int unionFirst;
    int unionSecond;
} CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_34_unionType;
void FUN0()
{
    int data;
    CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_34_unionType myUnion;
    data = -1;
    data = 20;
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
                intPointer[i] = 0; 
            }
            printIntLine(intPointer[0]);
            free(intPointer);
        }
    }
}
