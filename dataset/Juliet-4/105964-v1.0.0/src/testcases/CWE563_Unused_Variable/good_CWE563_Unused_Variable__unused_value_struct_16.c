void FUN0()
{
    twoIntsStruct data;
    while(1)
    {
        data.intOne = 0;
        data.intTwo = 0;
        break;
    }
    while(1)
    {
        printStructLine(&data);
        break;
    }
}
void FUN1()
{
    twoIntsStruct data;
    while(1)
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
        break;
    }
    while(1)
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
        break;
    }
}
