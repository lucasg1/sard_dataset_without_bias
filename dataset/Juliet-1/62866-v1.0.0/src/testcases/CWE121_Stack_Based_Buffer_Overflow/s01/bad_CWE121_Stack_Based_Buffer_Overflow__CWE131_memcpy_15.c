void FUN0()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (int *)ALLOCA(10);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
