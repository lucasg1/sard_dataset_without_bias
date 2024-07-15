static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
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
    }
}
