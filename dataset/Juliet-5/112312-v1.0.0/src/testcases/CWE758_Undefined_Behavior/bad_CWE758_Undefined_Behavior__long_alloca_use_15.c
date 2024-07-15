void FUN0()
{
    switch(6)
    {
    case 6:
    {
        long * pointer = (long *)ALLOCA(sizeof(long));
<START>
        long data = *pointer; 
<END>
        printLongLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
