void FUN0()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    switch(6)
    {
    case 6:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        int i;
        for(i=0; i<10; i++)
        {
<START>
            printIntLine(data[i]);
<END>
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
