namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(int data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            int * buffer = new int[10];
            for (i = 0; i < 10; i++)
            {
                buffer[i] = 0;
            }
            if (data >= 0 && data < (10))
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
            delete[] buffer;
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(int data)
{
    if(VAR2)
    {
        {
            int i;
            int * buffer = new int[10];
            for (i = 0; i < 10; i++)
            {
                buffer[i] = 0;
            }
            if (data >= 0 && data < (10))
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
            delete[] buffer;
        }
    }
}
void FUN3()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(int data)
{
    if(VAR3)
    {
        {
            int i;
            int * buffer = new int[10];
            for (i = 0; i < 10; i++)
            {
                buffer[i] = 0;
            }
            if (data >= 0)
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is negative.");
            }
            delete[] buffer;
        }
    }
}
void FUN5()
{
    int data;
    data = -1;
    data = 7;
    VAR3 = 1; 
    FUN4(data);
}
} 
