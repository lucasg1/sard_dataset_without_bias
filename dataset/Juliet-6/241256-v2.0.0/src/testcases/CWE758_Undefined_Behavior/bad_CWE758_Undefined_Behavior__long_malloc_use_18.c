void FUN0()
{
    goto sink;
sink:
    {
        long * pointer = (long *)malloc(sizeof(long));
        if (pointer == NULL) {exit(-1);}
<START>
        long data = *pointer; 
<END>
        free(pointer);
        printLongLine(data);
    }
}
