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
        int * * pointer = (int * *)malloc(sizeof(int *));
        if (pointer == NULL) {exit(-1);}
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        *pointer = data; 
        {
            int * data = *pointer;
            printIntLine(*data);
        }
        free(pointer);
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
        int * * pointer = (int * *)malloc(sizeof(int *));
        if (pointer == NULL) {exit(-1);}
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        *pointer = data; 
        {
            int * data = *pointer;
            printIntLine(*data);
        }
        free(pointer);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
