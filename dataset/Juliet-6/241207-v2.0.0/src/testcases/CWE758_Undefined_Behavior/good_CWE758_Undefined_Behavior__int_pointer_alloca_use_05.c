static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
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
    if(staticTrue)
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
