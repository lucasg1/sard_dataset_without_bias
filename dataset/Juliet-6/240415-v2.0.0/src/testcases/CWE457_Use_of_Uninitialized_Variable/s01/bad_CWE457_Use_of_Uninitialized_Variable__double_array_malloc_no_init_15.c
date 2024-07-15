void FUN0()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
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
            printDoubleLine(data[i]);
<END>
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
