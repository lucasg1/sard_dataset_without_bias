void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
        break;
    }
}
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    switch(6)
    {
    case 6:
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
