void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
}
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
    {
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
}
