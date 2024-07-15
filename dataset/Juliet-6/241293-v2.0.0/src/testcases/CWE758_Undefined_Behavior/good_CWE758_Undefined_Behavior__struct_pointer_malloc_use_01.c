void FUN0()
{
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
}
