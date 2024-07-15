void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        free(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
