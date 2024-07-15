void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int64_t * pointer = (int64_t *)ALLOCA(sizeof(int64_t));
<START>
        int64_t data = *pointer; 
<END>
        printLongLongLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
