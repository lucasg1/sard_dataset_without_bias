void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)calloc(1, sizeof(twoIntsStruct));
    goto sink;
sink:
    if (data != NULL)
    {
        data[0].intOne = 1;
        data[0].intTwo = 1;
        printStructLine(&data[0]);
        free(data);
    }
}
