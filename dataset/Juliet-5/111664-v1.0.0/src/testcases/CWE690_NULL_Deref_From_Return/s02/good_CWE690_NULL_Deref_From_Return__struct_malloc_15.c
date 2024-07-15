void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (data != NULL)
        {
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine(&data[0]);
            free(data);
        }
        break;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
    switch(6)
    {
    case 6:
        if (data != NULL)
        {
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine(&data[0]);
            free(data);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
