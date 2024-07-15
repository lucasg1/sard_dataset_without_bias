void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (twoIntsStruct *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        data->intOne = 1;
        data->intTwo = 2;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
<START>
    printStructLine(data);
<END>
    free(data);
}
