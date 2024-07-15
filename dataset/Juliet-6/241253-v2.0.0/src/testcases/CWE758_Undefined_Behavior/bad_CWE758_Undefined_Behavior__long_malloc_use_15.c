void FUN0()
{
    switch(6)
    {
    case 6:
    {
        long * pointer = (long *)malloc(sizeof(long));
        if (pointer == NULL) {exit(-1);}
<START>
        long data = *pointer; 
<END>
        free(pointer);
        printLongLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
