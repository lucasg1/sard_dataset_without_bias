void FUN0()
{
    goto sink;
sink:
    {
        twoIntsStruct * data;
        twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
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
    }
}
