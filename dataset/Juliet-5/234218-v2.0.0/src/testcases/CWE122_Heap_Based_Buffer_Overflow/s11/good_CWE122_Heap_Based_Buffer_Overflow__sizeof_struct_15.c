void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = (twoIntsStruct *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        data->intOne = 1;
        data->intTwo = 2;
        break;
    }
    printStructLine(data);
    free(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (twoIntsStruct *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        data->intOne = 1;
        data->intTwo = 2;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printStructLine(data);
    free(data);
}
