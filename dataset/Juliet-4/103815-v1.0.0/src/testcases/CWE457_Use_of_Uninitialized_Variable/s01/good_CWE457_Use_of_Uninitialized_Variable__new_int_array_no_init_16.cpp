namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = new int[10];
    while(1)
    {
        ; 
        break;
    }
    while(1)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
        delete [] data;
        break;
    }
}
void FUN1()
{
    int * data;
    data = new int[10];
    while(1)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        break;
    }
    while(1)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
        delete [] data;
        break;
    }
}
} 
