void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        twoIntsStruct * data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        twoIntsStruct * tmpData;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
        tmpData = (twoIntsStruct *)realloc(data, (130000)*sizeof(twoIntsStruct));
        if (tmpData != NULL)
        {
            data = tmpData;
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine(&data[0]);
        }
        free(data);
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
        twoIntsStruct * data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        twoIntsStruct * tmpData;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
        tmpData = (twoIntsStruct *)realloc(data, (130000)*sizeof(twoIntsStruct));
        if (tmpData != NULL)
        {
            data = tmpData;
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine(&data[0]);
        }
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
