void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
