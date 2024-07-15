void FUN0()
{
    while(1)
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
        break;
    }
}
