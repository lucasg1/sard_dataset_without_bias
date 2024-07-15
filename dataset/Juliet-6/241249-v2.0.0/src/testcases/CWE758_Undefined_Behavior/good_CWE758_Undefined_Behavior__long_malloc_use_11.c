void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
}
void FUN1()
{
    if(globalReturnsTrue())
    {
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
}
