void FUN0()
{
    switch(6)
    {
    case 6:
    {
        double * * pointer = (double * *)malloc(sizeof(double *));
        if (pointer == NULL) {exit(-1);}
<START>
        double * data = *pointer; 
<END>
        free(pointer);
        printDoubleLine(*data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
