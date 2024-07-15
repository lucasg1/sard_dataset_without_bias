void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        twoIntsStruct * data;
        twoIntsStruct * * pointer = (twoIntsStruct * *)malloc(sizeof(twoIntsStruct *));
        if (pointer == NULL) {exit(-1);}
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        *pointer = data; 
        {
            twoIntsStruct * data = *pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
        free(pointer);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        twoIntsStruct * data;
        twoIntsStruct * * pointer = (twoIntsStruct * *)malloc(sizeof(twoIntsStruct *));
        if (pointer == NULL) {exit(-1);}
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        *pointer = data; 
        {
            twoIntsStruct * data = *pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
        free(pointer);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
