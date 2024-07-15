void FUN0()
{
    int i,k;
    twoIntsStruct data;
    for(i = 0; i < 1; i++)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    for(k = 0; k < 1; k++)
    {
        printStructLine(&data);
    }
}
void FUN1()
{
    int h,j;
    twoIntsStruct data;
    for(h = 0; h < 1; h++)
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
    for(j = 0; j < 1; j++)
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
