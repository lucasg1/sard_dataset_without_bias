void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (twoIntsStruct *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        data->intOne = 1;
        data->intTwo = 2;
    }
    printStructLine(data);
    free(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = (twoIntsStruct *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        data->intOne = 1;
        data->intTwo = 2;
    }
    printStructLine(data);
    free(data);
}
