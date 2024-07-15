void FUN0()
{
    twoIntsStruct * data;
    switch(6)
    {
    case 6:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
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
    switch(6)
    {
    case 6:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    twoIntsStruct * data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        break;
    }
    switch(7)
    {
    case 7:
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    switch(6)
    {
    case 6:
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
