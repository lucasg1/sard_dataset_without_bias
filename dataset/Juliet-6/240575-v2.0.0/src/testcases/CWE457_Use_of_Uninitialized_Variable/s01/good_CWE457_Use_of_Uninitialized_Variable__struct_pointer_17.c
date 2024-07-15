void FUN0()
{
    int i,k;
    twoIntsStruct * data;
    for(i = 0; i < 1; i++)
    {
        ; 
    }
    for(k = 0; k < 1; k++)
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}
void FUN1()
{
    int h,j;
    twoIntsStruct * data;
    for(h = 0; h < 1; h++)
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
    }
    for(j = 0; j < 1; j++)
    {
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}
