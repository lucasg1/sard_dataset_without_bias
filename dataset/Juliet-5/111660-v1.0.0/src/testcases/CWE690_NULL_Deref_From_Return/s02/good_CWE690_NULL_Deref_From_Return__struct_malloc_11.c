void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine(&data[0]);
            free(data);
        }
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
    if(globalReturnsTrue())
    {
        if (data != NULL)
        {
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine(&data[0]);
            free(data);
        }
    }
}
