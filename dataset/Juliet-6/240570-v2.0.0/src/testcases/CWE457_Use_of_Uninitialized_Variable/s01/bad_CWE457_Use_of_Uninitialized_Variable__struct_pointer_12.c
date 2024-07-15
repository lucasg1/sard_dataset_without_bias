void FUN0()
{
    twoIntsStruct * data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
<END>
    }
    else
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}
