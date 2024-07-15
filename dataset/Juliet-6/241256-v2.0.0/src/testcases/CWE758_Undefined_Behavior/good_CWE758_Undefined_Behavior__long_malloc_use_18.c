void FUN0()
{
    goto sink;
sink:
    {
        long data;
        long * pointer = (long *)malloc(sizeof(long));
        if (pointer == NULL) {exit(-1);}
        data = 5L;
        *pointer = data; 
        {
            long data = *pointer;
            printLongLine(data);
        }
        free(pointer);
    }
}
