void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            int data;
            int * pointer = (int *)malloc(sizeof(int));
            if (pointer == NULL) {exit(-1);}
            data = 5;
            *pointer = data; 
            {
                int data = *pointer;
                printIntLine(data);
            }
            free(pointer);
        }
    }
}
