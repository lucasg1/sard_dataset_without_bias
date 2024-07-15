void FUN0()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
<END>
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
