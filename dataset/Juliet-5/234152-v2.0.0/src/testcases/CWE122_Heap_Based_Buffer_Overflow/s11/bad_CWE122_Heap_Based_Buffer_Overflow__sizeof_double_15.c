void FUN0()
{
    double * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (double *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
