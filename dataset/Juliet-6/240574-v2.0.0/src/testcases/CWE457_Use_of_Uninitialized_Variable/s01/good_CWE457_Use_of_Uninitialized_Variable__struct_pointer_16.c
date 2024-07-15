void FUN0()
{
    twoIntsStruct * data;
    while(1)
    {
        ; 
        break;
    }
    while(1)
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
        break;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    while(1)
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        break;
    }
    while(1)
    {
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
        break;
    }
}
