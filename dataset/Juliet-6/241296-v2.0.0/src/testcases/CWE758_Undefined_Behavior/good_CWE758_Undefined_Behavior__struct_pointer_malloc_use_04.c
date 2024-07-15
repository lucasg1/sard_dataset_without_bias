static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
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
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
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
}
