void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int * data;
        int * * pointer = (int * *)ALLOCA(sizeof(int *));
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        *pointer = data; 
        {
            int * data = *pointer;
            printIntLine(*data);
        }
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int * data;
        int * * pointer = (int * *)ALLOCA(sizeof(int *));
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        *pointer = data; 
        {
            int * data = *pointer;
            printIntLine(*data);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
