void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
<START>
            twoIntsStruct * data = *pointer; 
<END>
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
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
