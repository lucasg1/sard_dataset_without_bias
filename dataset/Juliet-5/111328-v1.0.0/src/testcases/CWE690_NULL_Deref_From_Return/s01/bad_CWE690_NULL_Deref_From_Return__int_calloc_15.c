void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    switch(6)
    {
    case 6:
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
